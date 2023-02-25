/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:43 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:38:35 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("knife 🔪");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("axe 🪓");
		bob.attack();
	}
	{
		Weapon club = Weapon("pistol 🔫");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("dagger 🗡️ ");
		jim.attack();
	}
	return 0;
}
