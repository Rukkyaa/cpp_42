/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:22 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 11:54:37 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

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

class	ClapTrap {
	protected:
		std::string	_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
		int			_maxHitPoint;
	public:
		ClapTrap			( void );
		ClapTrap			( std::string name );
		ClapTrap			( ClapTrap const & rhs );
		ClapTrap			&operator=( ClapTrap const & rhs );
		~ClapTrap			( void );
		void	attack		( const std::string &target );
		void	takeDamage	( unsigned int amount );
		void	beRepaired	( unsigned int amount );
};

#endif
