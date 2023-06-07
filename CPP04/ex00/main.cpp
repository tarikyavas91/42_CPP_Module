/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:16:04 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 15:48:28 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	std::cout << "SUBJECT TESTS" << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << std::endl;

		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl;

	std::cout << "SUBJECT TESTS 2" << std::endl;
	{
		const WrongAnimal *meta = new WrongAnimal();
		const Animal *j = new Dog();
		const WrongAnimal *i = new WrongCat();
		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << std::endl;

		i->makeSound(); // will output the Wrongcat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	std::cout << "ANIMAL TESTS" << std::endl;
	{
		Animal beta;
		std::cout << beta.getType() << std::endl;
		std::cout << std::endl;

		Animal alpha(beta);
		Animal charlie;
		charlie = beta;
		std::cout << std::endl;

		std::cout << "alpha type: " << alpha.getType() << std::endl;
		std::cout << "charlie type: " << charlie.getType() << std::endl;
		alpha.makeSound();
		charlie.makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "CAT TESTS" << std::endl;
	{
		Cat beta;
		std::cout << beta.getType() << std::endl;
		std::cout << std::endl;

		Cat alpha(beta);
		Cat charlie;
		charlie = beta;
		std::cout << std::endl;

		std::cout << "alpha type: " << alpha.getType() << std::endl;
		std::cout << "charlie type: " << charlie.getType() << std::endl;
		alpha.makeSound();
		charlie.makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "DOG TESTS" << std::endl;
	{
		Dog beta;
		std::cout << beta.getType() << std::endl;
		std::cout << std::endl;

		Dog alpha(beta);
		Dog charlie;
		charlie = beta;
		std::cout << std::endl;

		std::cout << "alpha type: " << alpha.getType() << std::endl;
		std::cout << "charlie type: " << charlie.getType() << std::endl;
		alpha.makeSound();
		charlie.makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}