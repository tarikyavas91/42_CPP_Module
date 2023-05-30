/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:48:32 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 19:48:33 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str	= "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory addres of str: " << &str << std::endl;
	std::cout << "Memory addres of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory addres of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}
