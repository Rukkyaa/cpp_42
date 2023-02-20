/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:40:46 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 18:03:10 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include "Weapon.hpp"

class	HumanB {
	public:
		HumanB(std::string name);
		void		attack();
		void		setWeapon(Weapon &weapon);
		std::string	_name;
		Weapon		*_weapon;
};

#endif
