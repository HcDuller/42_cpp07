/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:43:31 by hde-camp          #+#    #+#             */
/*   Updated: 2023/03/02 15:30:28 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <iostream>

template<typename T>
void displayData(T const& a){
	std::cout << "val[" << a << "]\t\t";
	std::cout << "address[" << static_cast<const void*>(&a) << "]" << std::endl;
}

template<typename T>
void iter(T* addr, size_t len, void (&func)(T const&)){
	(void)func;
	for (size_t i = 0; i < len; i++)
	{
		func (*(addr + i));
	}
}