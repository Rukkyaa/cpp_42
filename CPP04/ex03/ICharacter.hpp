/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:44:37 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 11:22:15 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter				( void ) {}
		virtual string const	&getName( void ) const = 0;
		virtual void 			equip	( AMateria* materia ) = 0;
		virtual void			unequip	( int idx ) = 0;
		virtual void			use		( int idx, ICharacter &target ) = 0;
};

#endif
