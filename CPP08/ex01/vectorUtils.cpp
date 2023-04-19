/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectorUtil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:32:39 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 14:37:05 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

vector<int>	fillVector( unsigned int size) {
	vector<int>	tmp;

	for (unsigned int i = 0; i < size; ++i)
		tmp.push_back(rand() % 1000);
	return (tmp);
}

vector<int>	fillNegativeVector( unsigned int size) {
	vector<int>	tmp;

	for (unsigned int i = 0; i < size; ++i)
		tmp.push_back(rand() % 1000 - 500);
	return (tmp);
}

int	getShortestSpan( vector<int> &v) {
	int	min = abs(v[0] - v[1]);

	sort(v.begin(), v.end());
	for (size_t i = 0; i < v.size() - 1; ++i)
		if (abs(v[i] - v[i + 1]) < min)
			min = abs(v[i] - v[i + 1]);
	return (min);
}

int	getLongestSpan( vector<int> &v) {
	vector<int>	tmp = v;

	sort(tmp.begin(), tmp.end());
	return (abs(tmp[tmp.size() - 1] - tmp[0]));
}