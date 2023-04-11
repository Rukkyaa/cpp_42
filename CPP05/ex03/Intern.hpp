/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:57:32 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 17:02:26 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

using std::string;
using std::exception;

class Intern {

	public:

		Intern				( void );
		Intern				(Intern const &rhs);
		Intern	&operator=	(Intern const &rhs);
		~Intern				( void );

		Form *makeForm( string name, string target );

		class FormNotFoundException: public exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif