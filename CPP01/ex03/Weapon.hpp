/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:02 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/28 10:14:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {
	public:
		const std::string	&getType();
		void				setType(std::string type);
		Weapon();
		Weapon(std::string type);
		~Weapon();
	private:
		std::string	_type;
};

#endif
