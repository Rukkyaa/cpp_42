/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:25:09 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 16:05:42 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	private:
		string	_type;
	public:
		WrongCat					( void );
		WrongCat					( string );
		WrongCat					( WrongCat const & src );
		WrongCat		&operator=	( WrongCat const & src );
		~WrongCat				( void );
		string	getType		( void ) const;
		string	getName		( void ) const;
		void	makeSound	( void ) const;
};

#endif
