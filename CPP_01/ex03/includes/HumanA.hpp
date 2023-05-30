/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:01:58 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 18:01:59 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &weapon;
    
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void    attack( void );
};

#endif