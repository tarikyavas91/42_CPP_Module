/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:55:52 by tyavas            #+#    #+#             */
/*   Updated: 2023/05/29 15:52:16 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    if (argc == 1)
    {
        std::cout << "* NUMBER OF ARGUMENTS IS INCORRECT *" << std::endl;
        return 0;
    }
    while (argv[++j])
    {
        i = -1;
        while (argv[j][++i])
            std::cout << (char)toupper(argv[j][i]);
    }
    std::cout << std::endl;
    return 0;
}