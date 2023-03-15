/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/15 09:25:48 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	diamond("Diamond");
	DiamondTrap	alan(diamond);

	alan.whoAmI();
	alan.attack("Alan");
	alan.attack("Alan");
	alan.attack("Alan");
	alan.takeDamage(99);
	alan.beRepaired(2);
	alan.takeDamage(3);
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
	alan.highFivesGuys();
	alan.beRepaired(1);

	return (0);
}
