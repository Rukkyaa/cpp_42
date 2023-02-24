/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:55:32 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/24 18:13:56 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, string name) {
	if (N < 0)
	{
		std::cout << "\033[1;31mError:" << "\033[0;30m the number of zombie in the horde can't be negative !\033[0m";
		exit(0);
	}
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i ++)
		horde[i]._name = name;
	return (horde);
}
