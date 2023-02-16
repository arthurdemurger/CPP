/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:11:07 by ademurge          #+#    #+#             */
/*   Updated: 2023/02/16 14:16:17 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(std::string filename, std::string s1, std::string s2)
{
	std::ofstream	ofs;
	std::ifstream	ifs;
	std::string		buf;
	std::string		tmp;
	size_t			pos;

	ifs.open(filename);
	if (ifs.fail())
	{
		std::cerr << "The open file cannot be open." << std::endl;
		return (EXIT_FAILURE);
	}
	ofs.open(filename + ".replace");
	while (!ifs.eof())
	{
		getline(ifs, buf);
		for (size_t i = 0; i < buf.length(); i++)
		{
			if ((pos = buf.find(s1, i)) != std::string::npos)
			{
				buf.erase(pos, s1.length());
				buf.insert(pos, s2);
				i += s2.length() - 1;
			}
		}
		ofs << buf;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return (EXIT_SUCCESS);
}

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	return (replace(av[1], av[2], av[3]));
}