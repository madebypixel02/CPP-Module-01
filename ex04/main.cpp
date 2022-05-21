/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:05:46 by aperez-b          #+#    #+#             */
/*   Updated: 2022/05/21 13:19:24 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ios>
#include <iostream>
#include <sstream>

int	replace(char **argv, std::string str)
{
	std::ofstream		outfile;
	int					pos;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size();
		}
		outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char		c;
	std::string	str;
	if (argc != 4)
		std::cout << "usage: replace <file> old_word new_word";
	std::ifstream	infile;
	infile.open(argv[1]);
	infile >> std::noskipws;
	if (infile.fail())
	{
		std::cout << "Error: '" << argv[1] << "':" << \
		" no such file or directory" << std::endl;
		return (1);
	}
	while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (replace(argv, str));
}
