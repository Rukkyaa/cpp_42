/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:18 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 14:43:28 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

using	std::string;
using	std::cout;
using	std::endl;

class	Data {
	private:
		Data(const Data &src);
		Data	&operator=(const Data &rhs);
	public:
		~Data();
		Data();
		string	str;
		int		num;
};

#endif