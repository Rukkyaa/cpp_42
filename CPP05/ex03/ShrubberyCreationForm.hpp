/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:50:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 16:21:26 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

using std::ofstream;
using std::ifstream;

class ShrubberyCreationForm : public Form
{
	private:
		string	_target;
	public:
		ShrubberyCreationForm				( void );
		ShrubberyCreationForm				( string target );
		ShrubberyCreationForm				( ShrubberyCreationForm const &rhs );
		ShrubberyCreationForm	&operator=	( ShrubberyCreationForm const &rhs );
		~ShrubberyCreationForm				( void );

		void execute						(Bureaucrat const &executor) const;
};

#endif