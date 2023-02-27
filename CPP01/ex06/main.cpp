/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:20:22 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/27 19:11:32 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl		client;
	std::string	tab_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level = 5;
	
	if (argc != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	for (int i = 0; i < 4; i++) {
		if (argv[1] == tab_lvl[i])
			level = i;
	}
	switch (level) {
		case 0:
			client.complain("DEBUG");
		case 1:
			client.complain("INFO");
		case 2:
			client.complain("WARNING");
		case 3:
			client.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
