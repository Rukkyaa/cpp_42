/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:04:33 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:20:29 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\033[1;34m    String address: \033[0;34m" << &str << std::endl;
	std::cout << "\033[1;35m StringPTR address: \033[0;35m" << stringPTR << std::endl;
	std::cout << "\033[1;32mStringREF addresss: \033[0;32m" << &stringREF << std::endl << std::endl;


	std::cout << "\033[1;34m   String value: \033[0;34m" << str << std::endl;
	std::cout << "\033[1;35mStringPTR value: \033[0;35m" << *stringPTR << std::endl;
	std::cout << "\033[1;32mStringREF value: \033[0;32m" << stringREF << std::endl;
}
