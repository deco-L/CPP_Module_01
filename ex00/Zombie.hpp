/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/19 13:11:00 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#define MEOW	"BraiiiiiiinnnzzzZ..."
#define BYE		"Bye~"

#include <iostream>
#include <cstdlib>

class Zombie
{
private:
	std::string	name;

public:
	Zombie( const std::string& name );
	~Zombie();

	void	announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
