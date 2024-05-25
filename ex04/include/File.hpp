/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/25 16:47:10 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <iostream>
#include <sys/stat.h>

class File
{
private:
	char*			file_name;
	std::ifstream	input;
	std::ofstream	out;

public:
	File( char* init_name);
	~File( void );

	bool			input_open( void );
	bool			output_open( void );
	void			file_close();
	std::ifstream&	get_input( void );
	std::ofstream&	get_output( void );
};

#endif
