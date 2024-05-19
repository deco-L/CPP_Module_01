/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/19 13:29:02 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) :
	name(name) {}

Zombie::~Zombie() {
	std::cout	<< name
				<< ": "
				<< BYE
				<< std::endl;
}

void	Zombie::announce() {
	std::cout	<< Zombie::name
				<< ": "
				<< MEOW
				<< std::endl;
	return ;
}

void  Zombie::setName(const std::string& name) {
  this->name = name;
}
