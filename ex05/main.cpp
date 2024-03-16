/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/16 18:11:02 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
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
	Harl harl;
	draw_terminal_line();
	std::cout	<< "\e[1;32m Harl program \e[0m"
				<< std::endl;
	std::cout	<< "\e[1;93m DEBUG \e[0m"
				<< std::endl;
	harl.complain("DEBUG");
	std::cout	<< "\e[1;93m INFO \e[0m"
				<< std::endl;
	harl.complain("INFO");
	std::cout	<< "\e[1;93m WARNING \e[0m"
				<< std::endl;
	harl.complain("WARNING");
	std::cout	<< "\e[1;93m ERROR \e[0m"
				<< std::endl;
	harl.complain("ERROR");
	std::cout	<< "\e[1;93m invalid level \e[0m"
				<< std::endl;
	harl.complain("");
	harl.complain("aaa");
	draw_terminal_line();
	return (EXIT_SUCCESS);
}
