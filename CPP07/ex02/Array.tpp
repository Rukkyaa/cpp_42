/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:14:42 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 22:52:03 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array( void ): _n(0), _content(new T[0]()) {
	// 
}

template<typename T>
Array<T>::Array( unsigned int n ) : _n(n), _content(new T[n]()) {
	// 
}

template<typename T>
Array<T>::Array( const Array &rhs) : _n(rhs.size()) {
	_content = new T[rhs.size()];
	for (size_t i = 0; i < rhs.size(); ++i)
		_content[i] = rhs._content[i];
}

template<typename T>
Array<T>	&Array<T>::operator=( const Array &rhs ) const {
	delete[] _content;
	_content = new T[rhs.size()];
	_n = rhs.size();
	for (size_t i = 0; i < rhs.size(); ++i)
		_content[i] = rhs._content[i];
}

template<typename T>
unsigned int	Array<T>::size( void ) const {
	return (_n);
}

template<typename T>
T	&Array<T>::operator[]( unsigned int id ) const {
	if (id >= _n)
		throw Array<T>::OutOfRangeException();
	return (_content[id]);
}

template<typename T>
const char	*Array<T>::OutOfRangeException::what( void ) const throw() {
	return (BOLD_RED"[ERROR]" RED"The index is out of range" RESET);
}

template<typename T>
void	Array<T>::randomFill( void ) {
	for (size_t i = 0; i < this->size(); ++i)
		(*this)[i] = rand() % 100;
}

template<typename T>
void	Array<T>::printArray( void ) const {
	for (size_t i = 0; i < this->size(); ++i)
		cout << "Array[" << i << "] = " << (*this)[i] << endl;
}

template<typename T>
Array<T>::~Array( void ) {
	delete[] _content;
}