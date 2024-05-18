/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 16:38:43 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& init_name) :
name(init_name),
weapon(NULL) {
	if (init_name.empty()) {
		std::cerr	<< "\e[1;31m Error: empty name\e[0m"
					<< std::endl;
		return ;
	}
}

HumanB::~HumanB() {
	if (name.empty())
		return ;
	std::cout	<< name
				<< "> Bye~"
				<< std::endl;
};

void HumanB::setWeapon(Weapon& new_weapon)
{
	weapon = &new_weapon;
	if (new_weapon.getType().empty()) {
		std::cout	<< name
					<< " had no weapon."
					<< std::endl;
		return ;
	}
	std::cout	<< name
				<< " had "
				<< new_weapon.getType()
				<< '.' << std::endl;
	return ;
}

void HumanB::attack() {
	if (name.empty()) {
    std::cerr	<< "\e[1;31m Error: empty name\e[0m"
              << std::endl;
		return ;
  }
	if (!weapon || weapon->getType().empty()) {
		std::cout	<< name
					<< " attacks with their "
					<< "fists."
					<< std::endl;
		return ;
	}
	std::cout	<< name
				<< " attacks with their "
				<< weapon->getType()
				<< '.' << std::endl;
	return ;
}
