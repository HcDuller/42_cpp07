/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:40:35 by hde-camp          #+#    #+#             */
/*   Updated: 2023/03/02 19:01:30 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cmath>
#include <ctime>

#define BLACK  "\033[30m"
#define RED  "\033[31;1m"
#define GREEN  "\033[32;1m"
#define YELLOW  "\033[33;1m"
#define BLUE  "\033[34;1m"
#define MAGENTA  "\033[35;1m"
#define CYAN  "\033[36;1m"
#define WHITE  "\033[37;1m"
#define RESET  "\033[0m"

#define MAX_VAL 750

void subjectMain(void)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(static_cast<unsigned int>(time(NULL)));
	bool is_ok;
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		std::cout << GREEN << "Testing copy asignment and copy constructor START" << RESET << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		bool is_ok = true;
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (tmp[i] != test[i])
			{
				is_ok = false;
				std::cerr << "didn't save the same value!!" << std::endl;
				return;
			}
		}
		if (!is_ok)
			std::cout << RED << "Didn't copy properly" << RESET << std::endl;
		else
			std::cout << GREEN << "Copied properly" << RESET << std::endl;
	}

	std::cout << GREEN << "Testing manually asigned values with [] operator - START" << RESET << std::endl;
	is_ok = true;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			is_ok = false;
			std::cerr << RED << "didn't save the same value!!" << RESET << std::endl;
			return;
		}
	}
	if (!is_ok)
			std::cout << RED << "Didn't copy properly" << RESET << std::endl;
		else
			std::cout << GREEN << "Copied properly" << RESET << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror; //
	return ;
}

int main(void)
{
	subjectMain();

	return (0);
}