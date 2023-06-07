/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:43:07 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:43:09 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materia_() {
    std::cout << "MateriaSource: constructor!" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource: destructor!" << std::endl;
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        this->deleteMateria(this->materia_[i]);
    }
}

MateriaSource::MateriaSource(MateriaSource const& src) : materia_() {
    std::cout << "Copy constructor!! " << std::endl;
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        if (src.getMateria(i) != NULL) {
            this->materia_[i] = src.getMateria(i)->clone();
        }
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
    if (this != &rhs) {
        std::cout << "Copy assignment operator! " << std::endl;
        for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
            this->deleteMateria(this->materia_[i]);
            if (rhs.getMateria(i) != NULL) {
                this->materia_[i] = rhs.getMateria(i)->clone();
            }
        }
    }
    return *this;
}

AMateria* MateriaSource::getMateria(int idx) const {
    if (0 <= idx && idx < MateriaSource::MAX_NUM_MATERIA_) {
        return this->materia_[idx];
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m == NULL) {
        return;
    }
    bool learned = false;
    for (int i = 0; i < MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) == NULL && this->haveMateria(m) == false) {
            std::cout << "leanMateria: " << m->getType() << std::endl;
            this->materia_[i] = m;
            learned = true;
            break;
        }
    }
    if (learned == false) {
        delete m;
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < MateriaSource::MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) == NULL) {
            continue;
        }
        if (type == this->getMateria(i)->getType()) {
            std::cout << "Create Materia: " << type << std::endl;
            return this->getMateria(i)->clone();
        }
    }
    std::cout << "Don't create Materia: " << type << std::endl;
    return NULL;
}

void MateriaSource::deleteMateria(AMateria* m) {
    if (m != NULL) {
        delete m;
    }
    m = NULL;
}

bool MateriaSource::haveMateria(AMateria* m) {
    if (m == NULL) {
        return false;
    }
    for (int i = 0; i < MAX_NUM_MATERIA_; i++) {
        if (this->getMateria(i) == NULL) {
            continue;
        }
        if (this->getMateria(i)->getType() == m->getType()) {
            return true;
        }
    }
    return false;
}
