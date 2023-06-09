/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:33:44 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:33:45 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int main()
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) / Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	
	std::cout << "a is: "<< a << std::endl;
	std::cout << "b is: "<< b << std::endl;
	std::cout << "max is: "<< Fixed::max( a, b ) << std::endl;

	while (b >= a)
		a++;

	std::cout << "a is: "<< a << std::endl;
	std::cout << "b is: "<< b << std::endl;
	std::cout << "max is: "<< Fixed::max( a, b ) << std::endl;
}