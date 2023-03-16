/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:25:09 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 15:15:06 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal {
	private:
		string	_type;
	public:
		Cat					( void );
		Cat					( string );
		Cat					( Cat const & src );
		Cat		&operator=	( Cat const & src );
		~Cat				( void );
		string	getType		( void ) const;
		string	getName		( void ) const;
		void	makeSound	( void ) const;
};

#endif
