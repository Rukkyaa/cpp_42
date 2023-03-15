/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:47:49 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/15 10:06:10 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;
	public:
		DiamondTrap				( std::string name );
		DiamondTrap				( void );
		DiamondTrap				( const DiamondTrap &rhs);
		DiamondTrap	&operator=	( DiamondTrap const & rhs );
		~DiamondTrap			( void );
		void		whoAmI		( void );
		using					ScavTrap::attack;
};

#endif
