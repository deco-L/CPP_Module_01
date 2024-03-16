/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/16 16:20:49 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl () {
	function_map["DEBUG"] = &Harl::debug;
	function_map["INFO"] = &Harl::info;
	function_map["WARNING"] = &Harl::warning;
	function_map["ERROR"] = &Harl::error;
	return ;
}

void Harl::debug() {
	std::cout	<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I really do!"
				<< std::endl;
	return ;
}

void Harl::info() {
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! If you did, "
				<< "I wouldn’t be asking for more!"
				<< std::endl;
	return ;
}

void Harl::warning() {
	std::cout	<< "I think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month."
				<< std::endl;
	return ;
}

void Harl::error() {
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
	return ;
}

void Harl::complain(std::string level) {
    std::map<std::string,
	void (Harl::*)()>::iterator it = function_map.find(level);
    if (it != function_map.end()) {
        (this->*(it->second))();
    } else {
        std::cerr << "Unknown level: " << level << std::endl;
    }
}
