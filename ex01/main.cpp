/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:52:10 by hde-camp          #+#    #+#             */
/*   Updated: 2023/03/02 15:30:52 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

#define BLACK  "\033[30m"
#define RED  "\033[31;1m"
#define GREEN  "\033[32;1m"
#define YELLOW  "\033[33;1m"
#define BLUE  "\033[34;1m"
#define MAGENTA  "\033[35;1m"
#define CYAN  "\033[36;1m"
#define WHITE  "\033[37;1m"
#define RESET  "\033[0m"

void charArrayTest(){
	std::cout << GREEN <<   "Char Array Test -start" << RESET << std::endl;
	char cStr[10] = "abcdefghi";
	::iter<char>(cStr,10,::displayData);
	std::cout << MAGENTA << "Char Array Test -end" << RESET << std::endl;
}

void integerArrayTest(){
	std::cout << GREEN <<   "Integer Array Test -start" << RESET << std::endl;
	int  iArray[10] = {0,1,2,3,4,5,6,7,8,9};
	::iter<int>(iArray,10,::displayData);
	std::cout << MAGENTA << "Integer Array Test -end" << RESET << std::endl;
}
void stringArrayTest(){
	std::cout << GREEN <<   "String Array Test -start" << RESET << std::endl;
	std::string strStr[10] = {"a","b","c","d","e","f","g","h","i",""};
	::iter<std::string>(strStr,10,::displayData);
	std::cout << MAGENTA << "String Array Test -end" << RESET << std::endl;
}

int main (void){
	charArrayTest();
	integerArrayTest();
	stringArrayTest();
	return (0);
}