/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/09 01:45:18 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) :
	type(type) {}

Weapon::~Weapon() {
	std::cout	<< type
				<< "> Bye~"
				<< std::endl;
};

const std::string Weapon::getType() {
	return (type);
}

void Weapon::setType(const std::string& new_type) {
	std::string	tmp;

	tmp = type;
	type = new_type;
	std::cout	<< "This weapon has changed from a "
				<< tmp
				<< " to "
				<< type
				<< '.' << std::endl;
	return ;
}
