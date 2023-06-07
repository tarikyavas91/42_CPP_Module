/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:15:23 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:15:25 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Canonical */
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Void Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal Overloader function Called" << std::endl;
	this->_type = src._type;
	return *this;
}

/* Getters and Setters */
std::string Animal::getType(void) const 
{
	return this->_type;
}

/* Public Functions */
void Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}
