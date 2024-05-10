/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 16:10:23 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define MEOW		"BraiiiiiiinnnzzzZ..."
#define BYE			"Bye~"
#define HOWMANY		"How many zombies?"
#define NAME		"What is the name of the zombie?"
#define ERROR		"\033[31mError\033[m"
#define NUMBER_ERR	"Invalid number"
#define NAME_ERR	"Invalid name"

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
	Zombie( const std::string &name );
	~Zombie();

	void			announce( void );
	static Zombie*	zombieHorde( int N, std::string name );
};

#endif
