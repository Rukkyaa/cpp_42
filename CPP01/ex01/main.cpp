/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:38:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/24 18:17:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "\033[1;31mCreating a huge zombie horde(10):\033[0;31m" << std::endl;
	Zombie	*horde = zombieHorde(10, "Zerg");
	
	std::cout << std::endl << "\033[1;35mThe zombies will talk :\033[0;35m" << std::endl;
	for (int i = 0; i < 10; i++)
		horde[i].announce();		
	std::cout << std::endl << "\033[1;30mThe zombies will be destroyed(and freed) :" << std::endl;
	delete[] horde;
}
