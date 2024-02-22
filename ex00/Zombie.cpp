/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/22 15:55:11 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( const std::string& name ) :
	name(name) {}

Zombie::~Zombie() {
	std::cout	<< name
				<< ": "
				<< "Bye~"
				<< std::endl;
}

void	Zombie::announce() {
	std::cout	<< Zombie::name
				<< ": "
				<< MEOW
				<< std::endl;
	return ;
}
