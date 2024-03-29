/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 15:42:51 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	axel("Axel");

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
	axel.beRepaired(1);

	return (0);
}
