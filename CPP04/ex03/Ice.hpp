/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:42:13 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:14 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
    Ice();
    virtual ~Ice();
    Ice(Ice const& src);

    Ice& operator=(Ice const& rhs);

    virtual AMateria* clone() const;
    virtual void use(ICharacter const& target);
};

#endif  // EX03_ICE_HPP_
