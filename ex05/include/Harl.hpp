/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 14:59:47 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <functional>
#include <map>
#include <string>
#include <iostream>

class Harl
{
private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	std::map<std::string, void (Harl::*)()> function_map;

public:
	Harl( void );
	~Harl( void ) {}

	void	complain( std::string level);
};

#endif
