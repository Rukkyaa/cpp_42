/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:34:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 11:54:44 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::vector<int> numbers;
	Span span(5);

	numbers.push_back(28);
	numbers.push_back(4);
	numbers.push_back(1);
	numbers.push_back(40);
	numbers.push_back(13);

	cout << "Contenu du Span: " << endl;
	span.printSpan();
	span.addNumber(numbers.begin(), numbers.end());
	cout << "Contenu du Span: " << endl;
	span.printSpan();

	return (0);
}