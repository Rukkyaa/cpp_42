/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:34:53 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:24:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include <iostream>
# include <typeinfo>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

# include "ICharacter.hpp"

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[1;30m"
# define BOLD_RED "\033[1;31m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_YELLOW "\033[1;33m"
# define BOLD_BLUE "\033[1;34m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN "\033[1;36m"
# define BOLD_WHITE "\033[1;37m"

# define UNDERLINE_BLACK "\033[4;30m"
# define UNDERLINE_RED "\033[4;31m"
# define UNDERLINE_GREEN "\033[4;32m"
# define UNDERLINE_YELLOW "\033[4;33m"
# define UNDERLINE_BLUE "\033[4;34m"
# define UNDERLINE_MAGENTA "\033[4;35m"
# define UNDERLINE_CYAN "\033[4;36m"
# define UNDERLINE_WHITE "\033[4;37m"

# define RESET "\033[0m"


class	ICharacter;

class	AMateria {
	protected:
		string	_type;
	public:
		AMateria						( string const &type );
		AMateria						( const AMateria &rhs );
		AMateria			&operator=	( const AMateria &rhs );
		virtual ~AMateria				( void );
		
		string const		&getType	( void ) const;
		virtual AMateria	*clone		() const = 0;
		virtual void		use			( ICharacter &target);
};

#endif
