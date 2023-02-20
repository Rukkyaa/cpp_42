/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:55:32 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 16:05:14 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, string name) {
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i ++)
		horde[i]._name = name;
	return (horde);
}
