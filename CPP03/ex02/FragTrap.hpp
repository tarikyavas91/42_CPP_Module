/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:28:06 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:28:07 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap:	public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap &fragtrap);
	FragTrap( std::string name );

	~FragTrap();

	FragTrap	&operator=(const FragTrap &fragtrap);

	void	highFivesGuys( void );
	void attack(const std::string& target);

	int			getHp( void );
	int			getEp( void );
	int			getAd( void );

	std::string	getName( void );
};

#endif