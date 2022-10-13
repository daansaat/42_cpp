/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:11:02 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/12 17:28:59 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv) {
    
    for (int i = 1; argv[i]; i++)
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)toupper(argv[i][j]);
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
