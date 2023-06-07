/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:13 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:18:14 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
		Brain *_brain;
		
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog  &src);
		Dog &operator=(const Dog &src);
		~Dog();

		void makeSound(void) const;
};

#endif