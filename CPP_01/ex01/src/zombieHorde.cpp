/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:33:31 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 16:33:31 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N , std::string name)
{
	int			i;
	std::string	names[N];
	Zombie		*zombies = new Zombie[N];

	i = -1;
	while (++i < N)
		zombies[i].addName(name);
	return (zombies);
}