/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:19 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 13:16:06 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
	Brain brain;

	std::string str[100];
	const std::string *thoughts;
	str[0] = "tho";
	str[1] = "ou";
	str[2] = "gh";
	str[3] = "ts";

	brain.setThoughts(str);
	thoughts = brain.getThoughts();
	for (int i = 0; i < 4; i++)
		std::cout << thoughts[i] << std::endl;
		
	}
	std::cout << std::endl;
	std::cout << std::endl;





	std::cout << "SUBJECT TEST" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}





	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "SUBJECT TEST 2" << std::endl;
	{
	Animal* animals[10];
	for(int i = 0; i < 10; i++)
	{
		if (i < 5) {animals[i] = new Cat();}
		else {animals[i] = new Dog();}
	}
	
	for(int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	for(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	}	

	return 0;
}