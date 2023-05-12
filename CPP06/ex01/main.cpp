/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:38:24 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 14:43:03 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int	main( void ) {
	Data		*data = new Data;
	uintptr_t	ptr;

	data->str = "Hello world !";
	data->num = 42;
	cout << "Before :" << endl;
	cout << "data->str: " << data->str << endl;
	cout << "data->num: " << data->num << endl;
	cout << "data ptr: " << data << endl; 

	cout << endl << "Serialization" << endl;
	ptr = Serializer::serialize(data);
	cout << "Derialization" << endl << endl;
	data = Serializer::deserialize(ptr);
	
	cout << "After :" << endl;
	cout << "data->str: " << data->str << endl;
	cout << "data->num: " << data->num << endl;
	cout << "data ptr: " << data << endl; 

	delete data;
	return (0);
}