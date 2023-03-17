/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:31:11 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:52:43 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main( void ) {
	Character* zaz = new Character("zaz");
	Ice			test;
	Cure		cure;
	
	zaz->equip(&test);
	zaz->equip(&cure);
	zaz->equip(&cure);
	Character* bob = new Character(*zaz);
	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->use(2, *bob);
	bob->use(1, *bob);
	bob->use(3, *bob);
	
	delete zaz;
	delete bob;
	return (0);
}
