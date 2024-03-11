/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/12 03:32:03 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include "Error.hpp"
#include <cstdlib>
#include <fstream>

int main(int argc, char** argv) {
	std::fstream	stream;

	Error::argument_number(argc, argv[0]);
	stream.open(argv[1]);
	if (!stream)
		Error::file_open();
	stream.close();
	return (EXIT_SUCCESS);
}
