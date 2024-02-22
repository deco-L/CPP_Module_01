/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/22 23:26:06 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#define MEOW		"BraiiiiiiinnnzzzZ..."
#define BYE			"Bye~"
#define HOWMANY		"How many zombies?"
#define NAME		"What is the name of the zombie?"
#define NUMBER_ERR	"Error Invalid number"
#define NAME_ERR	"Error Invalid name"

#include <sys/ioctl.h>
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <sstream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie() {};
	Zombie(const std::string &name);
	~Zombie();

	void			announce( void );
	static Zombie*	zombieHorde( int N, std::string name );
};

#endif
