/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:17:46 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 18:17:48 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
		std::string _thoughts[100];

	public:
		Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& boj);
		~Brain();

		void setThoughts(const std::string *thoughts);
		const std::string *getThoughts(void) const;

};

#endif