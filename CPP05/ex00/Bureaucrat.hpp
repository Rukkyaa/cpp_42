/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:39:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 06:20:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <typeinfo>

# include "colors.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

using std::string;
using std::cout;
using std::cin;
using std::exception;
using std::endl;

class Bureaucrat
{
	private:
		string const	_name;
		int				_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat	&operator=( Bureaucrat const & rhs );
		~Bureaucrat( void );

		string	getName( void ) const;
		int		getGrade( void ) const;

		void	incrementGrade( void );
		void	decrementGrade( void );

		class GradeTooHighException: public exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif