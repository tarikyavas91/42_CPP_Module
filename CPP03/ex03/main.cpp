/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:29:56 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:29:57 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap d;
	std::cout << std::endl;
	DiamondTrap a( "XD" );
	std::cout << std::endl;
	DiamondTrap b( "Alfonso" );
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;
	d.attack("Me");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
}