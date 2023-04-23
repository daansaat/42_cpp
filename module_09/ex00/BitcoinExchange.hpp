#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <fstream>
# include <iostream>
# include <map>
# include <stdexcept>
# include <string>
# include <sstream>

std::map<std::string, double> readExchangeRateFromFile();
void processInput(std::string filename);

#endif
