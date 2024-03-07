/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/07 14:11:25 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/ioctl.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>

static size_t	get_term_line() {
	winsize	terminal_size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
	return (terminal_size.ws_col);
}

static void	draw_terminal_line() {
	size_t	terminal_col;

	terminal_col = get_term_line();
	for (size_t i = 0; i < terminal_col; i++)
		std::cout << "=";
	std::cout << std::endl;
	return ;
}

int	main() {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR;
	std::string&	stringREF = string;

	stringPTR = &string;
	draw_terminal_line();
	std::cout	<< "string: "<< &string << std::endl
				<< "stringPTR: " << stringPTR << std::endl
				<< "stringREF: " << &stringREF <<std::endl;
	draw_terminal_line();
	std::cout	<< "string: " << string << std::endl
				<< "stringPTR: " << *stringPTR << std::endl
				<< "stringREF: " << stringREF << std::endl;
	draw_terminal_line();
	return (EXIT_SUCCESS);
}
