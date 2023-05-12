/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:39:42 by axlamber          #+#    #+#             */
/*   Updated: 2023/05/12 14:40:14 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include "Data.hpp"

class	Serializer {
	private:
		~Serializer();
		Serializer(const Serializer &src);
		Serializer	&operator=(const Serializer &rhs);
		Serializer();
	public:
		static uintptr_t	serialize(Data *data);
		static Data	*deserialize(uintptr_t raw);
};

#endif