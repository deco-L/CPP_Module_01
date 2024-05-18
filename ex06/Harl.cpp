/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 17:50:57 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl () {
	function_map["DEBUG"] = &Harl::debug;
	function_map["INFO"] = &Harl::info;
	function_map["WARNING"] = &Harl::warning;
	function_map["ERROR"] = &Harl::error;
	key.push_back("DEBUG");
	key.push_back("INFO");
	key.push_back("WARNING");
	key.push_back("ERROR");
	return ;
}

void Harl::debug() {
	std::cout	<< "\e[1;34m [ DEBUG ] \e[0m"
				<< std::endl
				<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< std::endl
				<< "I really do!"
				<< std::endl;
	return ;
}

void Harl::info() {
	std::cout	<< "\e[1;34m [ INFO ] \e[0m"
				<< std::endl
				<< "I cannot believe adding extra bacon costs more money. "
				<< std::endl
				<< "You didn’t put enough bacon in my burger! "
				<< std::endl
				<< "If you did, I wouldn’t be asking for more!"
				<< std::endl;
	return ;
}

void Harl::warning() {
	std::cout	<< "\e[1;34m [ WARNING ] \e[0m"
				<< std::endl
				<< "I think I deserve to have some extra bacon for free. "
				<< std::endl
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month."
				<< std::endl;
	return ;
}

void Harl::error() {
	std::cout	<< "\e[1;34m [ ERROR ] \e[0m"
				<< std::endl
				<< "This is unacceptable! "
				<< std::endl
				<< "I want to speak to the manager now."
				<< std::endl;
	return ;
}

void Harl::complain(std::string level) {
    std::map<std::string,
	void (Harl::*)()>::iterator it;
	
	it = function_map.find(level);
    if (it != function_map.end())
        (this->*it->second)();
	else
        std::cerr << "Unknown level: " << level << std::endl;
	return ;
}

void Harl::filter(std::string level) {
  int index = -1;
  for (size_t i = 0; i < key.size(); i++) {
    if (key[i] == level) {
      index = i;
      break;
    }
  }

  if (index != -1) {
    switch(index) {
      case 0:
        (this->*function_map["DEBUG"])();
        __attribute__ ((fallthrough));

      case 1:
        (this->*function_map["INFO"])();
        __attribute__ ((fallthrough));

      case 2:
        (this->*function_map["WARNING"])();
        __attribute__ ((fallthrough));

      case 3:
        (this->*function_map["ERROR"])();
        break;

      default:
        std::cerr << "Unknown level: " << level << std::endl;
        break;
    }
  } else
    std::cerr << "Unknown level: " << level << std::endl;
	return ;
}
