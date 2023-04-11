/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:50:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 16:52:16 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDONFORM_HPP
# define PRESIDENTIAL_PARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		string	_target;
	public:
		PresidentialPardonForm				( void );
		PresidentialPardonForm				( string target );
		PresidentialPardonForm				( PresidentialPardonForm const &rhs );
		PresidentialPardonForm	&operator=	( PresidentialPardonForm const &rhs );
		~PresidentialPardonForm				( void );

		void execute						(Bureaucrat const &executor) const;
};

#endif