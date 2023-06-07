/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:19:14 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 19:23:23 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat *cat = new Cat;
	cat->makeSound();
	std::cout << std::endl;
	Dog *dog = new Dog;
	dog->makeSound();
	std::cout << std::endl;
	
	delete cat;
	delete dog;

	return 0;
}