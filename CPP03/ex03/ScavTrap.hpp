/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:30:21 by tyavas            #+#    #+#             */
/*   Updated: 2023/06/05 15:30:22 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( const ScavTrap &scavtrap);

	~ScavTrap();

	ScavTrap &operator=( const ScavTrap &scavtrap);

	void		guardGate( void );
	void		attack(const std::string &target);

	int			getHp( void );
	int			getEp( void );
	int			getAd( void );

	std::string	getName( void );
};

#endif