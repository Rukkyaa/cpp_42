/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:50:00 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 16:46:01 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <cstdlib>
# include <ctime>

using std::ofstream;
using std::ifstream;
using std::rand;
using std::srand;
using std::time;

class RobotomyRequestForm : public Form
{
	private:
		string	_target;
	public:
		RobotomyRequestForm				( void );
		RobotomyRequestForm				( string target );
		RobotomyRequestForm				( RobotomyRequestForm const &rhs );
		RobotomyRequestForm	&operator=	( RobotomyRequestForm const &rhs );
		~RobotomyRequestForm				( void );

		void execute						(Bureaucrat const &executor) const;
};

#endif