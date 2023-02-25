/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:33:28 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/26 00:23:44 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void		attack();
	private:
		std::string	_name;
		Weapon		&_weapon;

};

#endif
