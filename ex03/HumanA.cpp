/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/09 01:42:40 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& newweapon) :
name(name),
weapon(&newweapon) {
	std::cout	<< name
				<< " had "
				<< weapon->getType()
				<< '.' << std::endl;
}

HumanA::~HumanA() {
	std::cout	<< name
				<< "> Bye~"
				<< std::endl;
};

void HumanA::attack() {
	std::cout	<< name
				<< " attacks with their "
				<< weapon->getType()
				<< '.' << std::endl;
	return ;
}

void HumanA::view_address() {
	std::cout	<< &name << ": " << name << std::endl
				<< &weapon << ": " << weapon->getType()
				<< std::endl;
	return ;
}
