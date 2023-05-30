/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:02:02 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 18:02:03 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;
    
public:
    HumanB( std::string name );
    ~HumanB();

    void    attack( void );
    void    setWeapon( Weapon &weapon );
};

#endif