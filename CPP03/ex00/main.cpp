/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 11:30:14 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	axel("Axel");

	axel.attack("Alan");
	axel.attack("Alan");
	axel.attack("Alan");
	axel.takeDamage(5);
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
	axel.beRepaired(1);
}
