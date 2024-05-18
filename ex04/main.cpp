/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 16:45:24 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include "Replace.hpp"
#include "Error.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, char** argv) {
	char	buff;

	Error::argument_number(argc, argv[0]);
	File	file(argv[1]);
	if (!file.input_open())
		Error::file_open();
	if (!file.output_open())
		Error::file_open();
	while (file.get_input().get(buff))
	{
		if (argv[2][0] == buff)
			Replace::stream_editor(file, argv[2], argv[3]);
		else
			file.get_output() << buff;
	}
	std::cout	<< "\e[1;30;102m Sucess create "
				<< argv[1]
				<< ".replace file\e[0m"
				<< std::endl;
	return (EXIT_SUCCESS);
}
