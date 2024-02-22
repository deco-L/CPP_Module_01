/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/22 14:05:25 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#define MEOW "BraiiiiiiinnnzzzZ..."

#include <iostream>
#include <cstdlib>

class Zombie
{
private:
	Zombie*		newZombieptr;
	std::string	name;

public:
	Zombie( const std::string& name );
	~Zombie();

	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
};

#endif