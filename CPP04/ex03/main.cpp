/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:31:11 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:24:48 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	main( void ) {
	Character* zaz = new Character("zaz");
	AMateria	test("Wood");
	
	zaz->equip(&test);
	Character* bob = new Character(*zaz);
	delete zaz;
	bob->use(0, *bob);
	delete bob;
	return (0);
}
