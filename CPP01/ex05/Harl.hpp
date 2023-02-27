/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:19:05 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/27 18:42:22 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Harl{
	public:
		Harl();
		~Harl();
		void	complain(std::string);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
