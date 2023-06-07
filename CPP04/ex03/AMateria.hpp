/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:41:36 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:19 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria {
 public:
    AMateria();
    explicit AMateria(std::string const& type);
    virtual ~AMateria();
    AMateria(AMateria const& src);

    AMateria& operator=(AMateria const& rhs);

    std::string const& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter const& target);

 protected:
    std::string type_;

    void setType(std::string const& type);
};

#endif  // EX03_AMATERIA_HPP_
