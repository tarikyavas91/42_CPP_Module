/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:02:09 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 18:02:10 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string	type;
public:
    Weapon( std::string type);
    ~Weapon( void );

	std::string const	getType( void );
	void				setType(std::string type);
};

#endif