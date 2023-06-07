/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:15:38 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:15:39 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Canonical */
Cat::Cat(): Animal()
{
	std::cout << "Cat Void Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &src): Animal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat Overloader function Called" << std::endl;
	this->_type = src._type;
	return (*this);
}

/* Public Functions */
void Cat::makeSound(void) const 
{
	std::cout << "Cat Sound" << std::endl;
}
