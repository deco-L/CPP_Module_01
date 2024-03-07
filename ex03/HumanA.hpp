/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 17:20:32 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	std::string	name;
	Weapon		weapon;

public:
	HumanA( const std::string name, Weapon weapon );
	~HumanA( void );

	void	attack( void );
	void	view_address( void );
};

#endif
