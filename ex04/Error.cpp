/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/11 17:55:18 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.hpp"

void Error::argument_number(int nbr, std::string name) {
	if (nbr != 4) {
		std::cerr	<< "\e[1;31m Usage: "
					<< name
					<< "<filename> <string1> <string2>\e[0m"
					<< std::endl;
	}
}
