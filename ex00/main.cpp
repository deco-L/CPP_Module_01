/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/22 16:01:11 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	NewZombie("Foo");
	Zombie*	TmpZombie;
	Zombie	RandomChumpZombie("Random");

	NewZombie.announce();
	RandomChumpZombie.announce();
	TmpZombie = NewZombie.newZombie("Tmp");
	TmpZombie->announce();
	RandomChumpZombie.randomChump("NewRandom");
	delete TmpZombie;
	return (EXIT_SUCCESS);
}
