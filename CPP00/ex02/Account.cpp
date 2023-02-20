/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:34:15 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 10:54:32 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	Account::displayAccountsInfos() {
	std::cout << "Salut" << std::endl;
}

void	Account::displayStatus() const {
	std::cout << "status" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	this->_totalAmount += deposit;
}

void	Account::makeWithdrawal(int withdrawal) {
	this->_totalAmount -= withdrawal;
}
