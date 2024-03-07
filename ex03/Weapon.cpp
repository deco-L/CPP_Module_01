/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 16:36:53 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) :
	type(type) {}

Weapon::~Weapon() {};

const std::string Weapon::getType() {
	std::cout	<< "This weapon is a "
				<< type
				<< '.' << std::endl;
	return (type);
}

void Weapon::setType(const std::string& new_type) {
	type = new_type;
	std::cout	<< "This weapon has changed from a "
				<< type
				<< "to a "
				<< new_type
				<< '.' << std::endl;
	return ;
}
