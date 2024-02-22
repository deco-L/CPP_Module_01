/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/22 23:38:55 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

static void	console_in_error_process(std::string error) {
	std::cin.clear();
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	std::cout	<< ERROR
				<< std::endl
				<< error
				<< std::endl;
	return ;
}

int	main() {
	int			number;
	std::string	name;
	Zombie* 	Horde;

	draw_terminal_line();
	std::cout	<< HOWMANY
				<< std::endl;
	std::cin >> number;
	draw_terminal_line();
	if (std::cin.fail())
		return (console_in_error_process(NUMBER_ERR), EXIT_FAILURE);
	draw_terminal_line();
	std::cout	<< NAME
				<< std::endl;
	std::cin >> name;
	draw_terminal_line();
	if (std::cin.fail())
		return (console_in_error_process(NAME_ERR), EXIT_FAILURE);
	Horde = Zombie::zombieHorde( number , name );
	for (int index = 0; index < number; index++)
		Horde[index].announce();
	delete[] Horde;
	return (EXIT_SUCCESS);
}
