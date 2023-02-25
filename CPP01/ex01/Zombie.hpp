/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:12:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class	Zombie {
	public:
		void	announce();
		void	set_name(std::string name);
		Zombie(std::string name);
		Zombie();
		~Zombie();
	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
