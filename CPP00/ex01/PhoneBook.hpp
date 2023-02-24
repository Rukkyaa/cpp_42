/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:58:30 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/24 18:47:36 by axlamber         ###   ########.fr       */
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
		PhoneBook();
		void	_add();
		void	_search();
		void	_exit();
		void	_show_format_contact();
	private:
		int		_nb_contact;
		Contact	_contacts[8];
};

#endif
