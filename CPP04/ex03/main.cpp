/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:42:57 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 14:26:30 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
    std::cout << "< Constructor of MateriaSource>" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    std::cout << std::endl;

    std::cout << "< Constructor of me>" << std::endl;
    ICharacter* me = new Character("me");
    std::cout << std::endl;

    std::cout << "< Create & equip materia >" << std::endl;
    AMateria* ice = src->createMateria("ice");
    me->equip(ice);
    AMateria* tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl;

    std::cout << "< Use materia >" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(100, *bob);
    std::cout << std::endl;

    std::cout << "< Unequip materia >" << std::endl;
    me->unequip(0);
    delete ice;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->unequip(100);
    me->use(100, *bob);
    std::cout << std::endl;

    std::cout << "< Destructor >" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}
