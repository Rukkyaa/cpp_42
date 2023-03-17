/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:02:07 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 13:02:43 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[MAX_MATERIA];
		int			_count;

	public:
		MateriaSource					( void );
		MateriaSource					( MateriaSource const &rhs );
		~MateriaSource					( void );
		MateriaSource	&operator=		( MateriaSource const &rhs );
		void			learnMateria	( AMateria *materia );
		AMateria		*createMateria	( string const &type );
};

#endif
