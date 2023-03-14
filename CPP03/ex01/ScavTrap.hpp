/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:37 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 13:55:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap	( void );
		ScavTrap	( std::string name );
		~ScavTrap	( void );
		void		attack( const std::string &target );
		void		guardGate( void );
};

#endif
