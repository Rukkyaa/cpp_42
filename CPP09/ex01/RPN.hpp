/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 00:15:20 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/20 10:50:12 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

# include "colors.hpp"

using	std::cout;
using	std::endl;
using	std::stack;
using	std::string;

class	RPN {
	public:
		class	InvalidExpression : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class	DivisionByZero : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		RPN( string const &str );
	private:
		stack<int>	_nbStack;
		void		doOp( char op );
};

#endif