/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:04:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 17:15:20 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "    String address: " << &str << std::endl;
	std::cout << " StringPTR address: " << stringPTR << std::endl;
	std::cout << "StringREF addresss: " << &stringREF << std::endl;


	std::cout << "\n   String value: " << str << std::endl;
	std::cout << "StringPTR value: " << *stringPTR << std::endl;
	std::cout << "StringREF value: " << stringREF << std::endl;
}
