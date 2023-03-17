/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:25:15 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:27:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice							( void );
		Ice							( Ice const &rhs );
		virtual ~Ice				( void );
		Ice 			&operator=	( Ice const &rhs );
		AMateria		*clone		( void ) const;
		void			use			( ICharacter &target);
};

#endif
