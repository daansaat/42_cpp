/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:53:37 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/12 14:43:03 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

#define CYAN "\033[0;36m"
#define RESET "\033[0m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts++),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << CYAN << _accountIndex << RESET;
	std::cout << ";amount:" << CYAN << _amount << RESET << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << CYAN << _accountIndex << RESET;
	std::cout << ";amount:" << CYAN << _amount << RESET;
	std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t rawtime;
	std::tm *timeinfo;
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon + 1 << timeinfo->tm_mday;
	std::cout << "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "] ";
}

int	Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getTotalAmount() {
	return (_totalAmount);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << CYAN << getNbAccounts() << RESET;
	std::cout << ";total:" << CYAN << getTotalAmount() << RESET;
	std::cout << ";deposits:" << CYAN << getNbDeposits() << RESET;
	std::cout << ";withdrawals:" << CYAN << getNbWithdrawals() << RESET;
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << CYAN << _accountIndex << RESET;
	std::cout << ";amount:" << CYAN << _amount << RESET;
	std::cout << ";deposits:" << CYAN << _nbDeposits << RESET;
	std::cout << ";withdrawals:" << CYAN << _nbWithdrawals << RESET;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << CYAN << _accountIndex << RESET;
	std::cout << ";p_amount:" << CYAN << _amount << RESET;
	std::cout << ";deposit:" << CYAN << deposit << RESET;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << CYAN << _amount << RESET;
	std::cout << ";nb_deposits:" << CYAN << _nbDeposits << RESET;
	std::cout << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << CYAN << _accountIndex << RESET;
	std::cout << ";p_amount:" << CYAN << _amount << RESET;
	if (withdrawal <= _amount) {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << CYAN << withdrawal << RESET;
		std::cout << ";amount:" << CYAN << _amount << RESET;
		std::cout << ";nb_withdrawals:" << CYAN << _nbWithdrawals << RESET;
		std::cout << std::endl;
		return (true);
	}
	else {
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}