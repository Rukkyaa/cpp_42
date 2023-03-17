/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:57:09 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 13:12:21 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual					~IMateriaSource	( void ) {}
		virtual void			learnMateria	( AMateria * ) = 0;
		virtual AMateria		*createMateria	( string const &type ) = 0;
};

#endif
