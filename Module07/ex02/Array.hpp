/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:34:13 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 03:34:13 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array {
private:
	T				*array;
	unsigned int	n;
public:
	Array(void);
	Array(unsigned int size);
	Array(Array const &array);
	~Array(void);

	unsigned int	size(void);

	Array	&operator=(Array<T> const &array);
	T		&operator[](unsigned int index);
};

template <typename T>
Array<T>::Array(void): array(NULL), n(0) {}

template <typename T>
Array<T>::Array(unsigned int size): array(new T[size]), n(size) {
	for (unsigned int i = 0; i < size; i++)
		this->array[i] = 0;
}

template <typename T>
Array<T>::Array(Array const &array) {
	*this = array;
}

template <typename T>
Array<T>::~Array(void) {
	if (this->n  != 0)
		delete [] this->array;
}

template <typename T>
unsigned int	Array<T>::size(void) {
	return (this->n);
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &array) {
	if (this == &array)
		return (*this);
	if (this->n != 0)
		delete [] this->array;
	this->n = array.n;
	this->array = new T[this->n];
	for (unsigned int i = 0; i < this->n; i++)
		this->array[i] = array.array[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) {
	if (index >= this->n)
		throw std::out_of_range("Index too big !");
	return (this->array[index]);
}

#endif
