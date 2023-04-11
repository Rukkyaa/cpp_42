/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:56:59 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 07:45:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

using std::string;
using std::cout;
using std::cin;
using std::exception;
using std::endl;

class Bureaucrat;

class	Form {
	private:
		string const	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;
	public:
		Form( void );
		Form( string name, int gradeToSign, int gradeToExecute );
		Form( Form const & src );
		Form	&operator=( Form const & rhs );
		~Form( void );

		string	getName( void ) const;
		bool	getSigned( void ) const;
		int		getGradeToSign( void ) const;
		int		getGradeToExecute( void ) const;

		void	beSigned( Bureaucrat const & bureaucrat );

		class GradeTooHighException: public exception {
			public:
				virtual const char	*what() const throw();
		};
		
		class GradeTooLowException: public exception {
			public:
				virtual const char	*what() const throw();
		};
		
};

std::ostream	&operator<<( std::ostream & o, Form const & rhs );

#endif