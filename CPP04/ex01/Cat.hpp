/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:01 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:18:02 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
		Brain *_brain;
		
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat  &src);
		Cat &operator=(const Cat &src);
		~Cat();

		void makeSound(void) const;
};

#endif