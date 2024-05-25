/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/25 16:59:52 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include "Replace.hpp"
#include "Error.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, char** argv) {
	Error::argument_number(argc, argv[0]);
	File	file(argv[1]);
	if (!file.input_open())
		Error::file_open();
	if (!file.output_open())
		Error::file_open();

  const std::string s1 = argv[2];
  const std::string s2 = argv[3];
	Replace::stream_editor(file, s1, s2);
	std::cout	<< "\e[1;30;102m Sucess create "
				<< argv[1]
				<< ".replace file\e[0m"
				<< std::endl;
	return (EXIT_SUCCESS);
}
