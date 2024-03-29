/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:23:15 by dsaat         #+#    #+#                 */
/*   Updated: 2023/02/01 17:09:15 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "strReplace.hpp"

static void	ft_error(std::string errormessage, std::string argument) {
	std::cerr << errormessage << argument << std::endl;
	std::exit(EXIT_FAILURE);
}

static void	check_file(std::string filename, std::fstream& file, int flag) {
	file.open(filename, flag);
	if (file.fail())
		ft_error("couldn't open file: ", filename);
}

int	main(int argc, char **argv) {

	if (argc != 4)
		ft_error("invalid argument count", "");

	std::string		filename (argv[1]);
	std::string		s1 (argv[2]);
	std::string		s2 (argv[3]);
	std::fstream	infile;
	std::fstream	outfile;

	check_file(filename, infile, std::ios::in);
	check_file(filename + ".replace", outfile, std::ios::out);

	while (infile) {
		std::string newline;
		getline(infile, newline);
		ft_strReplace(newline, s1, s2);
		outfile << newline;
		if (!infile.eof()) 
			outfile << std::endl;
	}
	
	infile.close();
	outfile.close();
	
	return (0);
}