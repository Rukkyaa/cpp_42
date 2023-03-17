/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:48:25 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 11:14:17 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_MATERIA 4


class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[MAX_MATERIA];
		int				_materiaCount;

	public:
		Character					( void );
		Character					( string name );
		Character					( Character const &rhs );
		Character		&operator=	( Character const &rhs );
		~Character					( void );

		string const	&getName	( void ) const;
		void 			equip		( AMateria* materia );
		void			unequip		( int idx );
		void			use			( int idx, ICharacter &target );
};

#endif
