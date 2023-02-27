/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:19:05 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/27 18:33:16 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Harl{
	public:
		Harl();
		~Harl();
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
