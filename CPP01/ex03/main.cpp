/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:43 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/26 00:41:49 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		std::cout << "\033[1;29mHuman A(Norminet)!\033[0m" << std::endl << std::endl;
		Weapon club = Weapon("knife 🔪");
		HumanA norminet("Norminet", club);
		norminet.attack();
		club.setType("axe 🪓");
		norminet.attack();
	}
	{
		std::cout << std::endl << "\033[1;29mHuman B(Xavier Niel)!\033[0m" << std::endl << std::endl;
		Weapon club = Weapon("pistol 🔫");
		HumanB xavier("Xavier Niel");
		xavier.attack();
		xavier.setWeapon(club);
		xavier.attack();
		club.setType("dagger 🗡️ ");
		xavier.attack();
	}
	return 0;
}
