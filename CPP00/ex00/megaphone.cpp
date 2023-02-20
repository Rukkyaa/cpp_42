/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:22:12 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/14 17:22:12 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int    main(int argc, char **argv) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (size_t i = 0; ++i < (size_t)argc;)
        for (size_t j = -1; ++j < std::string(argv[i]).size();)
            std::cout << (char) std::toupper(argv[i][j]);
    std::cout << std::endl;
    return (0);
}
