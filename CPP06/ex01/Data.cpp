/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:38:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 14:40:37 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) {
	// 
}

Data::~Data( void ) {
	// 
}

Data::Data( const Data &rhs) {
	(void)rhs;
}

Data	&Data::operator=( const Data &rhs) {
	(void)rhs;
	return (*this);
}
