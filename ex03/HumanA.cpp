/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 17:25:40 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon weapon) :
	name(name),
	weapon(weapon) {}

HumanA::~HumanA() {};

void HumanA::attack() {
	std::cout	<< name
				<< " attacks with their "
				<< weapon.getType()
				<< '.' << std::endl;
	return ;
}

void HumanA::view_address() {
	std::cout	<< &name << ": " << name << std::endl
				<< &weapon << ": " << weapon.getType()
				<< std::endl;
	return ;
}
