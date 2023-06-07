/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:41:46 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:19 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 public:
    Character();
    explicit Character(std::string const& name);
    virtual ~Character();
    Character(Character const& src);

    Character& operator=(Character const& rhs);

    std::string const& getName() const;
    AMateria* getMateria(int idx) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter const& target);

 private:
    static const int MAX_NUM_MATERIA_ = 4;
    AMateria* materia_[4];
    std::string name_;

    void deleteMateria(AMateria* m);
};
#endif  // EX03_CHARACTER_HPP_
