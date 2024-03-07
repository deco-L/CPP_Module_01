/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 16:42:39 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) :
	name(name),
	weapon(NULL) {}

HumanB::~HumanB() {};

void HumanB::setWeapon(Weapon new_weapon)
{
	weapon = new_weapon;
	std::cout	<< name
				<< " had a "
				<< new_weapon.getType()
				<< '.' << std::endl;
	return ;
}

void HumanB::attack() {
	std::cout	<< name
				<< " attacks with their "
				<< weapon.getType()
				<< '.' << std::endl;
	return ;
}
