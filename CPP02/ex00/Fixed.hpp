/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/04 16:12:44 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &other);
		~Fixed();
		void	setRawBits(int const raw);
		int		getRawBits() const;
	private:
		static const int	_fractionalBits = 8;
		int					_value;
};

#endif
