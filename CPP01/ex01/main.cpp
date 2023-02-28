/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:38:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/28 10:09:03 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv) {
	int nb;
	
	if (argc != 2 || std::string(argv[1]).empty())
	{
		std::cout << "\033[1;31mError:" << "\033[0;31m To use the program, type \"./zombie_horde <number>\"!\033[0m" << std::endl;
		exit(0);
	}
	nb = std::atoi(argv[1]);
	if (nb <= 0)
	{
		std::cout << "\033[1;31mError:" << "\033[0;31m the number of zombie in the horde (" << argv[1] << ") can't be negative/NULL/NaN !\033[0m" << std::endl;
		exit(0);
	}
	std::cout << "\033[1;31mCreating a huge zombie horde(" << nb << "):\033[0;31m" << std::endl;
	Zombie	*horde = zombieHorde(nb, "Zerg");
	
	std::cout << std::endl << "\033[1;35mThe zombies will talk :\033[0;35m" << std::endl;
	for (int i = 0; i < nb; i++)
		horde[i].announce();		
	std::cout << std::endl << "\033[1;30mThe zombies will be destroyed(and freed) :" << std::endl;
	delete[] horde;
}
