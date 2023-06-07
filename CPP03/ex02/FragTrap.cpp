/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:28:01 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:28:02 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap(100, 100, 30, "Default")
{
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &fragtrap ): ClapTrap(fragtrap._HP, fragtrap._EP, fragtrap._AD, fragtrap._name)
{
	std::cout << "FragTrap " << fragtrap._name << " copy contructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		std::cout << "FragTrap " << fragtrap._name << " copied into " << this->_name << std::endl;
		this->_name = fragtrap._name;
		this->_HP = fragtrap._HP;
		this->_AD = fragtrap._AD;
		this->_EP = fragtrap._EP;
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << "  high five " << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "FragTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " causing " << this->_AD << " points of damage" << std::endl;
			this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " unable to attack" << std::endl;
}

int	FragTrap::getAd( void )
{
	return (this->_AD);
}

int	FragTrap::getHp( void )
{
	return (this->_HP);
}

int	FragTrap::getEp( void )
{
	return (this->_EP);
}

std::string	FragTrap::getName( void )
{
	return (this->_name);
}