/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/19 13:29:33 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*zombieHorde;
	std::stringstream	sstream;

	zombieHorde = new Zombie[N];
	for (int index = 0; index < N; index++) {
		sstream << index + 1;
		zombieHorde[index].setName(name + '[' + sstream.str() + ']');
		sstream.str("");
	}
	return (zombieHorde);
}
