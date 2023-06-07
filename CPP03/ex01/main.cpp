/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:26:34 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:27:24 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clapTrap("Tim");
	ScavTrap	scavTrap;

	scavTrap.attack("Kostas");
	clapTrap.attack("Vlad");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(40);
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(1);
	scavTrap.attack("Cat");
	clapTrap.beRepaired(5);
	return 0;
}