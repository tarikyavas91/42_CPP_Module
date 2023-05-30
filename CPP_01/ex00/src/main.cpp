/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:32:19 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 16:32:23 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


int main()
{
    Zombie  *zombie1 = newZombie("Heap zombie");
    zombie1->announce();
    randomChump("Stack zombie");
    delete (zombie1);
    return (0);
}