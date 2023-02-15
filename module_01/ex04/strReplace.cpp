/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strReplace.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:23:22 by dsaat         #+#    #+#                 */
/*   Updated: 2023/02/01 17:09:00 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "strReplace.hpp"

void	ft_strReplace(std::string& newline, std::string s1, std::string s2) {
	std::size_t index = 0;
	std::size_t found = -1;
	while (index < newline.length()) {
		index = newline.find(s1, found + 1);
		found = index;
		if (index != std::string::npos) {
			newline = newline.substr(0, index) + s2 + newline.substr(index + s1.length(), newline.length());
		}
	}
}