/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:19:03 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:19:05 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Canonical */
Dog::Dog(): Animal()
{
	std::cout << "Dog Void Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &src): Animal()
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Overloader function Called" << std::endl;
	this->_type = src._type;
	return (*this);
}


/* Public Functions*/
void Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}
