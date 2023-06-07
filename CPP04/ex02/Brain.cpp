/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:41 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:18:42 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Canonical */
Brain::Brain(){
	std::cout << "Dog Void Constructor Called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Dog Destructor Called" << std::endl;
}

Brain::Brain(const Brain& obj){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj){
	std::cout << "Dog Overloader function Called" << std::endl;
	std::copy(obj.getThoughts(), obj.getThoughts() + 100, this->_thoughts);
	return *this;
}



/* Getters and Setters */
const std::string* Brain::getThoughts( void ) const{
	return this->_thoughts;
}

void Brain::setThoughts( const std::string* _thoughts ){
	std::copy(_thoughts, _thoughts + 100, this->_thoughts);
}
