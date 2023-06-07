/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:42:47 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:50 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include <string>

#include "AMateria.hpp"

class AMateria;

class ICharacter {
 public:
    virtual ~ICharacter() {}
    virtual std::string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter const& target) = 0;
};

#endif  // EX03_ICHARACTER_HPP_
