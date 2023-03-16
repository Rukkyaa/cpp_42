/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:15:28 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 17:45:51 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

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

# define RESET "\033[0m"

using std::cout;
using std::endl;
using std::string;
using std::cin;

class	Animal {
	protected:
		string	_type;
		string	_name;
	public:
		Animal							( void );
		Animal							( string name );
		Animal							( Animal const &rhs );
		Animal	&operator=				( Animal const &rhs );
		virtual	~Animal					( void );
		virtual	string		getType		( void ) const;
		virtual	string		getName		( void ) const;
		virtual	void		makeSound	( void ) const;
};

#endif
