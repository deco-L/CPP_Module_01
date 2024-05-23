/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/19 15:46:45 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

bool Error_argument_number(int argc) {
	if (argc == 2)
		return (false);
	std::cout	<< "\e[1;31m Error: "
				<< "Invalid argument number.\e[0m"
				<< std::endl;
	return (true);
}

int main(int argc, char** argv) {
	Harl harl;

	if (Error_argument_number(argc))
		exit(EXIT_FAILURE);
	harl.filter(argv[1]);
	return (EXIT_SUCCESS);
}
