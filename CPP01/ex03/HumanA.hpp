/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:33:28 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:23:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		void		attack();
		std::string	_name;
		Weapon		&_weapon;
};

#endif
