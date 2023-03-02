/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:09:56 by hde-camp          #+#    #+#             */
/*   Updated: 2023/03/02 14:16:27 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T& first, T& second){
	T temp = first;
	first = second;
	second = first;
}

template<typename T>
const T& min(const T& a, const T&b){
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
const T& max(const T& a, const T&b){
	if (a > b)
		return (a);
	return (b);
}
