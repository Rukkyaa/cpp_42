/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:02 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:40:07 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {
	public:
		std::string	getType();
		void		setType(std::string type);
		Weapon();
		Weapon(std::string type);
		~Weapon();
	private:
		std::string	_type;
};

#endif
