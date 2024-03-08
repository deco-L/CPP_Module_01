/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/09 02:11:27 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& init_name, Weapon& init_weapon) :
name(init_name),
weapon(&init_weapon) {
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
