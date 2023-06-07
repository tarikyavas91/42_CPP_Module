/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:41:16 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:20 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("AMateria") {
    std::cout << this->type_ << ": constructor!" << std::endl;
}

AMateria::AMateria(std::string const& type) : type_(type) {
    std::cout << this->type_ << ": constructor with arg!" << std::endl;
}

AMateria::~AMateria() {
    std::cout << this->type_ << ": destructor!" << std::endl;
}

AMateria::AMateria(AMateria const& src) {
    std::cout << "Copy constructor! ";
    std::cout << "Copying from " << src.getType() << "." << std::endl;
    this->setType(src.getType());
}

AMateria& AMateria::operator=(AMateria const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! ";
        std::cout << "Copying from " << rhs.getType() << " to "
                  << this->getType() << "." << std::endl;
        this->setType(rhs.getType());
    }
    return *this;
}

std::string const& AMateria::getType() const { return this->type_; }
void AMateria::setType(std::string const& type) { this->type_ = type; }

void AMateria::use(ICharacter const& target) {
    std::cout << "I used the materia to " << target.getName() << "."
              << std::endl;
}
