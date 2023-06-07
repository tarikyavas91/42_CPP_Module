/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:15:31 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 14:46:29 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>



class Animal
{
	protected:
	
		std::string _type;

	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		Animal &operator=(Animal const &src);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif