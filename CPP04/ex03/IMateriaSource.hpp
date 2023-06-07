/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:42:53 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/07 11:42:54 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_IMATERIASOURCE_HPP_
#define EX03_IMATERIASOURCE_HPP_

#include <string>

#include "AMateria.hpp"

class AMateria;

class IMateriaSource {
 public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif  // EX03_IMATERIASOURCE_HPP_
