/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:38:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 19:14:14 by rukkyaa          ###   ########.fr       */
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

uintptr_t	serialize( Data *data ) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*deserialize( uintptr_t ptr ) {
	return (reinterpret_cast<Data *>(ptr));
}