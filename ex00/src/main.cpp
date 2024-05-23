/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/19 13:09:34 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	NewZombie("Foo");
	Zombie*	TmpZombie;
	Zombie	RandomChumpZombie("Random");

	NewZombie.announce();
	RandomChumpZombie.announce();
	TmpZombie = newZombie("Tmp");
	TmpZombie->announce();
	randomChump("NewRandom");
	delete TmpZombie;
	return (EXIT_SUCCESS);
}
