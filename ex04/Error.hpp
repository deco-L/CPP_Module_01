/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/13 17:24:39 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ERROR_H
#define ERROR_H

#include <cstdlib>
#include <iostream>

class Error {
public:
	Error( void ) {}
	~Error( void ) {}

	static void	argument_number( int nbr, std::string name );
	static void file_name( void );
	static void file_open( void );
};

#endif
