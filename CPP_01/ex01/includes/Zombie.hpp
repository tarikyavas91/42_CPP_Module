/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:33:11 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 16:33:11 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP
#define __ZOMBIE_HPP

#include <vector>
#include <string>
#include <iostream>

class Zombie {


public:

	Zombie( void );

	Zombie(std::string name);
	~Zombie( void );

	void    announce( void );
	void	addName(std::string);

private:
	std::string name;
};

Zombie	*zombieHorde( int N , std::string name );

#endif