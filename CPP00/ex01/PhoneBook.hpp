/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:58:30 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/19 16:19:50 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

typedef	std::string string;

class	PhoneBook {
	public:
		int		_nb_contact;
		Contact	_contacts[8];
		void	_add();
		void	_search();
		void	_exit();
		void	_show_format_contact();
};

#endif
