#include "BitcoinExchange.hpp"

static std::map<std::string, double> readExchangeRateFromFile() {

	std::string filename = "data.csv";
	std::ifstream file(filename);
	if (!file.is_open()) {
		throw std::runtime_error("Unable to open file: " + filename);
	}
	std::map<std::string, double> database;
	std::string header, date, rate;
	std::getline(file, header);
	while (std::getline(file, date, ',') && std::getline(file, rate, '\n')) {
		database[date] = stod(rate);
	}
	return database;
}

static bool isValidDate(std::string& date) {

	std::istringstream iss(date);
	int year, month, day;
	char delimiter1, delimiter2;
	iss >> year >> delimiter1 >> month >> delimiter2 >> day;
	if (iss.fail() 
		|| delimiter1 != '-' || delimiter2 != '-' 
		|| year < 0 || year > 9999 
		|| month < 1 || month > 12 
		|| day < 1 || day > 31)
		return false;
	bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
 	if ((month == 2 && (leap_year ? day > 29 : day > 28)) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
        return false;	
	return true;
}

static bool isValidValue(std::string& value) {

	float number;
	try {
		number = std::stof(value);
	} catch (std::exception& e) {
		std::cerr << "Error: Invalid value: " << value << std::endl;
		return false;
	}
	if (number < 0) {
		std::cerr << "Error: Not a positive number: " << value << std::endl;
		return false;
	}
	if (number > 1000) {
		std::cerr << "Error: Too large a number: " << value << std::endl;
		return false;
	}
	return true;
}

static bool lowerDate(std::string& date) {

	std::istringstream iss(date);
	int year, month, day;
	char delimiter;
	iss >> year >> delimiter >> month >> delimiter >> day;
	if (year > 2022) {
		date = "2022-03-29";
	}
	else {
		day--;
		if (day == 0) {
			day = 31;
			month--;
			if (month == 0) {
				month = 12;
				year--;
				if (year < 2009)
					return false;
			}
		}
		std::ostringstream oss;
		oss << year << delimiter 
		<< std::setfill('0') << std::setw(2) << month << delimiter 
		<< std::setfill('0') << std::setw(2) << day;
		date = oss.str();
	}
	return true;
}

static double getExchangeRate(std::string& date, std::map<std::string, double>& database) {

	std::map<std::string, double>::iterator it;
	for (;;) {
		it = database.find(date);
		if (it != database.end())
			return it->second;
		if (!lowerDate(date))
			return 0;
	}
	return 0;
}

void processInput(std::string filename) {

	std::ifstream file(filename);
	if (!file.is_open()) {
		throw std::runtime_error("Unable to open file: " + filename);
	}
	std::map<std::string, double> database = readExchangeRateFromFile();
	std::string header, line;
	std::getline(file, header);
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string date, value;
		char delimiter;
		if (!(iss >> date >> delimiter >> value) || delimiter != '|')
			std::cerr << "Error: Malformatted line: " << line << std::endl;
		else if (!isValidDate(date))
			std::cerr << "Error: Invalid date: " << date << std::endl;
		else if (!isValidValue(value))
			continue;
		else {
			std::cout << date << " => " << value << " = "
					  << std::stod(value) * getExchangeRate(date, database) << std::endl;
		}
	}
}
