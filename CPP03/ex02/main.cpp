/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 15:43:17 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap	alan("Alan");

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
	alan.highFivesGuys();
	alan.beRepaired(1);

	return (0);
}
