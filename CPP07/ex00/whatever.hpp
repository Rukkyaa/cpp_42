/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:26:50 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 19:45:41 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap(T &a, T &b) {
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
T	&min(T a, T b) {
	return (a < b ? a : b);
}

template<typename T>
T	&max(T a, T b) {
	return (a > b ? a : b);
}