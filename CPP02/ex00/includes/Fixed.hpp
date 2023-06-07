/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:32:51 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:32:54 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_n;
	static const int	_c = 8;
public:
	Fixed();
	Fixed (Fixed &fixed);
	~Fixed();
	Fixed	&operator=(Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int raw);
};

# endif