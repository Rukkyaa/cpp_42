/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:38:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 15:47:58 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void) {
	Zombie	*alan = newZombie("Alan");
	alan->announce();
	randomChump("Axel");
	delete alan;
}
