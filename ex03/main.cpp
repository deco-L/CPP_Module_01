/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/09 02:37:06 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <sys/ioctl.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>

static size_t get_term_line() {
	winsize	terminal_size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
	return (terminal_size.ws_col);
}

static void draw_terminal_line() {
	size_t	terminal_col;

	terminal_col = get_term_line();
	for (size_t i = 0; i < terminal_col; i++)
		std::cout << "=";
	std::cout << std::endl;
	return ;
}

int main() {
	{
		draw_terminal_line();
		std::cout	<< "\e[1;30;46m In the case of HumanA \e[0m"
					<< std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		draw_terminal_line();
	}
	{
		draw_terminal_line();
		std::cout	<< "\e[1;30;46m In the case of HumanB \e[0m"
					<< std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");

		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		draw_terminal_line();
	}
	{
		draw_terminal_line();
		std::cout	<< "\e[1;30;46m In the case of null \e[0m"
					<< std::endl;

		Weapon club("");
		draw_terminal_line();
	}
	return (EXIT_SUCCESS);
}
