/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:25:09 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 15:51:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {
	private:
		string	_type;
	public:
		Dog					( void );
		Dog					( string );
		Dog					( Dog const & src );
		Dog		&operator=	( Dog const & src );
		~Dog				( void );
		string	getType		( void ) const;
		string	getName		( void ) const;
		void	makeSound	( void ) const;
};

#endif
