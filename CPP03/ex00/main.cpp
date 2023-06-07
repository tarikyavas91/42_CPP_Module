/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:24:43 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:25:55 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	tim("Tim");
	ClapTrap	kostas("Kostas");
	
	tim.attack("Kostas");
	kostas.takeDamage(9);
	kostas.beRepaired(7);
	kostas.beRepaired(7);
	kostas.attack("Tim");
	kostas.beRepaired(7);
	return (0);
}