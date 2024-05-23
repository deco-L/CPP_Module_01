/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/23 13:38:50 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& init_type) :
type(init_type) {
	if (init_type.empty()) {
		std::cerr	<< "\e[1;31m Error: empty weapon\e[0m"
					<< std::endl;
		return ;
	}
	std::cout	<< type
				<< "is generated"
				<< std::endl;
}

Weapon::~Weapon() {
	if (type.empty())
		return ;
	std::cout	<< type
				<< "> Bye~"
				<< std::endl;
};

const std::string& Weapon::getType() {
	return (type);
}

void Weapon::setType(const std::string& new_type) {
	std::string	tmp;

	tmp = type;
	type = new_type;
	if (tmp.empty()) {
		std::cout	<< type
					<< "is generated"
					<< std::endl;
		return ;
	}
	std::cout	<< "This weapon has changed from a "
				<< tmp
				<< " to "
				<< type
				<< '.' << std::endl;
	return ;
}
