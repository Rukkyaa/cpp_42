/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 15:24:21 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	alan("Alan");

	alan.attack("Alan");
	alan.attack("Alan");
	alan.attack("Alan");
	alan.takeDamage(2);
	alan.beRepaired(2);
	alan.takeDamage(6);
	alan.takeDamage(6);
	alan.beRepaired(10);
	alan.takeDamage(6);
	alan.beRepaired(10);
	alan.attack("Alan");
	alan.beRepaired(10);
	alan.attack("Alan");
	alan.attack("Alan");
	alan.attack("Alan");
	alan.attack("Alan");
	alan.attack("Alan");
	alan.guardGate();
	alan.beRepaired(1);

	axel.attack("Alan");
	axel.attack("Alan");
	axel.attack("Alan");
	axel.takeDamage(2);
	axel.beRepaired(2);
	axel.takeDamage(6);
	axel.takeDamage(6);
	axel.beRepaired(10);
	axel.takeDamage(6);
	axel.beRepaired(10);
	axel.attack("Alan");
	axel.beRepaired(10);
	axel.attack("Alan");
	axel.attack("Alan");
	axel.attack("Alan");
	axel.attack("Alan");
	axel.attack("Alan");
	axel.guardGate();
	axel.beRepaired(1);
}
