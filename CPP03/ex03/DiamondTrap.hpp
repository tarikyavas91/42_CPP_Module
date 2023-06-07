/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:29:27 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:29:28 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap &diamondtrap );
	DiamondTrap( std::string name );

	DiamondTrap	&operator=( const DiamondTrap &diamondtrap );

	~DiamondTrap();

	void	attack( const std::string &target );
	void	whoAmI( void );
};


#endif