/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:15:28 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 16:02:03 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include "Animal.hpp"

class	WrongAnimal {
	protected:
		string	_type;
		string	_name;
	public:
		WrongAnimal							( void );
		WrongAnimal							( string name );
		WrongAnimal							( WrongAnimal const &rhs );
		WrongAnimal	&operator=				( WrongAnimal const &rhs );
		virtual	~WrongAnimal				( void );
		virtual	string			getType		( void ) const;
		virtual	string			getName		( void ) const;
		virtual	void			makeSound	( void ) const;
};

#endif
