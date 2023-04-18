/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:32:59 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 00:02:34 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    try {
        vector<int>::iterator it = easyFind(v, 3);
        cout << "Found value " << *it << endl;
    } catch (std::exception& e) {
        cout << e.what() << endl;
    }

    try {
        vector<int>::iterator it = easyFind(v, 5);
        cout << "Found value " << *it << endl;
    } catch (std::exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}