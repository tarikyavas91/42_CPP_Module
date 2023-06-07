/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:16:23 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:16:44 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Void Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return _type;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrongcat Sound!" << std::endl;
}
