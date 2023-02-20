/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:23:51 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/19 15:15:51 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

typedef	std::string string;

class	Contact {
	private:
		string	_first_name;
		string	_last_name;
		string	_nickname;
		string	_phone_number;
		string	_darkest_secret;
	public:
		string	_get_first_name();
		string	_get_last_name();
		string	_get_nickname();
		string	_get_phone_number();
		string	_get_darkest_secret();
		void	_set_first_name();
		void	_set_last_name();
		void	_set_nickname();
		void	_set_phone_number();
		void	_set_darkest_secret();
		void	_show_contact(int id);
		void	_print_trunc(string str);
};

#endif
