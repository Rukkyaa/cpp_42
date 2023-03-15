/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:00:49 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/15 09:17:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAG_HIT_POINT 100
# define FRAG_ENERGY_POINT 100
# define FRAG_ATTACK_DAMAGE 30

class	FragTrap : virtual public ClapTrap {
	public:
		FragTrap				( void );
		FragTrap				( std::string name );
		FragTrap				( FragTrap const & rhs );
		FragTrap				&operator=( FragTrap const & rhs );
		~FragTrap				( void );
		void	highFivesGuys	( void );
};

#endif
