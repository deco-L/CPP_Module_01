/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/25 17:11:53 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::stream_editor(File& file, const std::string s1, const std::string s2) {
  std::string buff;
  size_t      s1_len;
  size_t      s2_len;
  size_t      point;

  s1_len = s1.length();
  s2_len = s2.length();
  point = 0;
  while (std::getline(file.get_input(), buff)) {
    point = buff.find(s1);
    if (!s1_len)
      point = std::string::npos;
    while (point != std::string::npos) {
      buff.erase(point, s1_len);
      buff.insert(point, s2);
      point = buff.find(s1, point + s2_len);
    }
    file.get_output() << buff;
    if (file.get_input().peek() != EOF)
      file.get_output() << std::endl;
  }
	return ;
}