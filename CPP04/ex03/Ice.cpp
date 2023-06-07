/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:42:03 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:15 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << this->getType() << ": constructor!!" << std::endl;
}

Ice::~Ice() { std::cout << this->type_ << ": destructor!!" << std::endl; }

Ice::Ice(Ice const& src) : AMateria(src.getType()) {
    std::cout << "Copy constructor!! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

Ice& Ice::operator=(Ice const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator!! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        AMateria::operator=(rhs);
        this->setType(rhs.getType());
    }
    return *this;
}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter const& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
