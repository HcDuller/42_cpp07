/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:09:41 by hde-camp          #+#    #+#             */
/*   Updated: 2023/03/02 18:49:01 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <stdexcept>

template<typename T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& origin);
		Array& operator=(Array const& origin);
		T& operator[](size_t index) throw(std::out_of_range);
		T& operator[](int index) throw(std::out_of_range);
		~Array();
		size_t size(void) const;
	private:
		T* _content;
		size_t _capacity;
};

template<typename T>
Array<T>::Array(): _content(NULL), _capacity(0){};

template<typename T>
Array<T>::Array(unsigned int n): _content(NULL), _capacity(n){
	this->_content = new T[n];
};

template<typename T>
Array<T>::Array(Array<T> const& origin){
	this->_capacity = origin.size();
	this->_content = new T[origin.size()];
	for (size_t i = 0; i < origin.size(); i++)
		this->_content[i] = origin._content[i];
};
template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& origin){
	if (this->_capacity != origin.size())
	{
		delete[] this->_content;
		this->_content = new T[origin.size()];
	}
	for (size_t i = 0; i < origin.size(); i++){
		this->_content[i] = origin[i];
	}
	return (*this);
};

template<typename T>
T& Array<T>::operator[](size_t index) throw(std::out_of_range) {
	if (index >= this->_capacity)
		throw std::out_of_range("Index is greater then Array capacity.");
	return (this->_content[index]);
};

template<typename T>
T& Array<T>::operator[](int index) throw(std::out_of_range) {
	if (index < 0)
		throw  std::out_of_range("Negative indexes are forbidden.");
	size_t temp = static_cast<size_t>(index);
	return (*this)[temp];
};

template<typename T>
Array<T>::~Array(){
	if (this->_content != NULL)
		delete[] this->_content;
}

template<typename T>
size_t Array<T>::size(void) const{
	return (this->_capacity);
};