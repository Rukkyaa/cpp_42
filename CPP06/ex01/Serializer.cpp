/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:38:15 by axlamber          #+#    #+#             */
/*   Updated: 2023/05/12 14:41:33 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize( Data *data ) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*Serializer::deserialize( uintptr_t ptr ) {
	return (reinterpret_cast<Data *>(ptr));
}