/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:38:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 18:48:57 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize( Data *data ) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*deserialize( uintptr_t ptr ) {
	return (reinterpret_cast<Data *>(ptr));
}