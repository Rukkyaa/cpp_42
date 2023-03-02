/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:30:02 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/03/01 16:41:03 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdlib>

int	ft_replace(char **argv, std::string content) {
	std::ofstream	outfile;
	int				pos;

	outfile.open(((std::string)argv[1] + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "\033[1;31mError \033[0;31mwhile opening the outfile !" << std::endl;
		return (EXIT_FAILURE);
	}
	for (size_t i = 0; i < content.length(); i++) {
		pos = content.find(argv[2], i);
		if (pos == (int)i) {
			outfile << argv[3];
			i += std::string(argv[2]).length() - 1;
		}
		else
			outfile << content[i];
	}
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv) {
	std::ifstream	infile;
	std::string		buffer;
	std::string		content;

	if (argc != 4) {
		std::cout << "\033[1;31mError: \033[0;31mwrong number of arguments !" << std::endl;
		std::cout << "Usage : ./replace <file> <old_word> <new_word>" << std::endl;
		return (EXIT_FAILURE);
	}
	if (std::string(argv[2]).empty()) {
		std::cout << "\033[1;31mError: \033[0;31mthe word to replace cannot be empty !" << std::endl;
		return (EXIT_FAILURE);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "\033[1;31mError \033[0;31mwhile opening the infile !" << std::endl;
		return (EXIT_FAILURE);
	}
	content.assign(std::istreambuf_iterator<char>(infile), std::istreambuf_iterator<char>());
	return (ft_replace(argv, content));
}
