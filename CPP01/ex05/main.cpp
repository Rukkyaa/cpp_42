/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:20:22 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/27 18:54:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	client;
	client.complain("DEBUG");
	client.complain("INFO");
	client.complain("WARNING");
	client.complain("ERROR");
	client.complain("NORMINET");
}
