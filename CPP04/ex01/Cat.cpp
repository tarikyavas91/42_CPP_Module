/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:17:52 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:17:55 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
// #include "Brain.hpp"

/* Canonical */
Cat::Cat(): Animal()
{
	std::cout << "Cat Void Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &src): Animal()
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
