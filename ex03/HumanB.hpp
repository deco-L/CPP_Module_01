/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 16:22:10 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	std::string	name;
	Weapon		weapon;

public:
	HumanB( const std::string& name );
	~HumanB( void );

	void	setWeapon( Weapon new_weapon );
	void	attack( void );
};

#endif
