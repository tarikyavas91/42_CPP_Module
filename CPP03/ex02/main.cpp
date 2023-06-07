/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:28:17 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:28:18 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "*** Basic Tests and Gate Guard ***" << std::endl;
		ClapTrap	clapTrap("Clap");
		FragTrap	fragTrap;

		fragTrap.attack("Tim");
		clapTrap.attack("Kostas");
		fragTrap.highFivesGuys();
		fragTrap.takeDamage(30);
		fragTrap.beRepaired(10);
		fragTrap.takeDamage(50);
		fragTrap.takeDamage(40);
		fragTrap.takeDamage(10);
		fragTrap.beRepaired(1);
		fragTrap.attack("Kostas");
		clapTrap.beRepaired(5);
	}
	{
		std::cout << std::endl << "*** Copying ***" << std::endl;
		FragTrap	fragTrap;

		fragTrap.takeDamage(30);
		FragTrap	frag2 ("FragTrapCopy");
		frag2 = fragTrap;
		frag2.attack("Kostas");
		fragTrap.takeDamage(30);
		FragTrap	frag3(fragTrap);
	}
	{

		std::cout << std::endl << "*** Repair and attack limits ***" << std::endl;
		FragTrap	fragTrap;

		for (int i = 0; i < 50; i++)
			fragTrap.attack("Tim");
		fragTrap.beRepaired(10);
		fragTrap.attack("Tim");
		fragTrap.takeDamage(100);
		fragTrap.takeDamage(100);
	}
	{
		std::cout << std::endl << "*** FragTrap ***" << std::endl;
		FragTrap	fragTrap;
		ScavTrap	scavTrap;

		scavTrap.attack("Tim");
		scavTrap.guardGate();
		fragTrap.attack("Tim");
		fragTrap.highFivesGuys();
		fragTrap.takeDamage(50);
		fragTrap.beRepaired(30);
		fragTrap.takeDamage(80);
	}
	return 0;
}