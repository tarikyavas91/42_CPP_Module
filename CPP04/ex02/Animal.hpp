/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:35 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:18:36 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		Animal();
		std::string _type;

	public:
		Animal(std::string name);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType(void) const;
};

#endif