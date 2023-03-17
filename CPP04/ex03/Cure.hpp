/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:38:53 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:39:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure							( void );
		Cure							( Cure const &rhs );
		virtual ~Cure					( void );
		Cure 			&operator=		( Cure const &rhs );
		AMateria		*clone			( void ) const;
		void			use				( ICharacter &target);
};

#endif
