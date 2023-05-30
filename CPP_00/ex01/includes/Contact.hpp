/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:57:03 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/27 14:57:04 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
public:
    Contact();
    ~Contact();
    
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
    
    Contact     add(Contact contact);
    int         isnull(Contact contact);
    void        display_complete(Contact contact);
    void        print_info(Contact contact, int i);
};

#endif