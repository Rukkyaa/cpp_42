/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:02 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 17:45:24 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

typedef std::string string;

class	Weapon {
	public:
		std::string	getType();
		void		setType(std::string type);
		Weapon();
		Weapon(std::string type);
	private:
		std::string	_type;
};

#endif
