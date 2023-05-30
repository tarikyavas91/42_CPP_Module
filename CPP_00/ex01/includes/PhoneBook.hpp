/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:56:52 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/29 14:09:50 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        int         check_pb(PhoneBook pb);
        PhoneBook   del_one(PhoneBook pb);
        void        display(PhoneBook pb);
        PhoneBook        add_i(PhoneBook pb, int i);
};

#endif