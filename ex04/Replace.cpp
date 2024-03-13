/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/03/13 18:04:56 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::stream_editor(File& file, char* s1, char* s2) {
	char	buff;
	size_t	index;
	size_t	s1_len;

	if (!s1 || !s2)
		return ;
	index = 1;
	s1_len = strlen(s1);
	while (index < s1_len) {
		file.get_input().get(buff);
		if (s1[index] != buff)
			break ;
		index++;
	}
	if (index == s1_len)
		file.get_output()	<< s2;
	else if (!buff)
		file.get_output()	<< std::string(s1).substr(0, index);
	else
		file.get_output()	<< std::string(s1).substr(0, index)
							<< buff;
	return ;
}