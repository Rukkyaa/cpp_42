/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:38:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/24 17:56:39 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "\033[1;34mCreation of multiple zombies :\033[0;34m" << std::endl;
	Zombie	*zombie = newZombie("Little Zombie");
	Zombie	test;
	std::cout << std::endl << "\033[1;35mThe zombies will talk :\033[0;35m" << std::endl;
	zombie->announce();
	randomChump("Chump Zombie");
	std::cout << std::endl << "\033[1;30mThe zombies will be destroyed :" << std::endl;
	delete zombie;
}
