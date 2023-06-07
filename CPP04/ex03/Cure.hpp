/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:41:55 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:16 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
 public:
    Cure();
    virtual ~Cure();
    Cure(Cure const& src);

    Cure& operator=(Cure const& rhs);

    virtual AMateria* clone() const;
    virtual void use(ICharacter const& target);
};

#endif  // EX03_CURE_HPP_
