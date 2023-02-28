/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:19:05 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/28 10:21:50 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl{
	public:
		Harl();
		~Harl();
		void	complain(std::string);
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
