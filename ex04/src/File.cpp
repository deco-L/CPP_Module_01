/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/25 16:50:49 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include "Error.hpp"

File::File(char* init_name):
file_name(init_name),
input(),
out() {
	if (!*init_name)
		Error::file_name();
	return ;
}

File::~File() {
	if (input.is_open())
	{
		std::cout	<< "\e[1;92m input file close \e[0m"
					<< std::endl;
		input.close();
	}
	if (out.is_open())
	{
		std::cout	<< "\e[1;92m output file close \e[0m"
					<< std::endl;
		out.close();
	}
};

static bool  is_directory(const char *path) {
  struct stat status;

  if (stat(path, &status) != 0)
    return (false);
  return S_ISDIR(status.st_mode);
}

bool File::input_open() {
	input.open(file_name);
	if (!input || is_directory(file_name))
		return (false);
	return (true);
}

bool File::output_open() {
	std::string	out_file_name;

	out_file_name = std::string(file_name).append(".replace");
	out.open(out_file_name.c_str());
	if (!out)
		return (false);
	return (true);
}

void File::file_close() {
	input.close();
	return ;
}

std::ifstream& File::get_input() {
	return (input);
}

std::ofstream& File::get_output() {
	return (out);
}
