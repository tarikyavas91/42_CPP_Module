/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:33:25 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 16:33:26 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    return ;
}


Zombie::~Zombie( void )
{
    return ;
}

void	Zombie::addName(std::string name)
{
	this->name = name;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}