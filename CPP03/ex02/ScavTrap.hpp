/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:37 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 14:42:09 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define SCAV_HIT_POINT 100
# define SCAV_ENERGY_POINT 50
# define SCAV_ATTACK_DAMAGE 20

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap	( void );
		ScavTrap	( std::string name );
		~ScavTrap	( void );
		void		attack( const std::string &target );
		void		guardGate( void );
};

#endif
