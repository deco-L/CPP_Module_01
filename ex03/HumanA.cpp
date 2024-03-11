/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/11 16:38:30 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& init_name, Weapon& init_weapon) :
name(init_name),
weapon(&init_weapon) {
	if (init_name.empty()) {
		std::cerr	<< "\e[1;31m Error: empty name\e[0m"
					<< std::endl;
		return ;
	}
	if (init_weapon.getType().empty()) {
		std::cerr	<< "\e[1;31m Error: "
					<< "There is no weapon that was given to me.\e[0m"
					<< std::endl;
		return ;
	}
	std::cout	<< name
				<< " had "
				<< weapon->getType()
				<< '.' << std::endl;
}

HumanA::~HumanA() {
	if (name.empty())
		return ;
	std::cout	<< name
				<< "> Bye~"
				<< std::endl;
};

void HumanA::attack() {
	if (name.empty())
		return ;
	if (weapon->getType().empty()) {
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
