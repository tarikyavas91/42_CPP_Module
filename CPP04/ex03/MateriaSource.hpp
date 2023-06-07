/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:43:13 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:43:13 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include <string>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const& src);

    MateriaSource& operator=(MateriaSource const& rhs);

    AMateria* getMateria(int idx) const;
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);

 private:
    static const int MAX_NUM_MATERIA_ = 4;
    AMateria* materia_[4];

    void deleteMateria(AMateria* m);
    bool haveMateria(AMateria* m);
};

#endif  // EX03_MATERIASOURCE_HPP_
