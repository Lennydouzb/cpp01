/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:53:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 11:12:57 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes.h"

static std::string	transform(std::string str, std::string search, std::string replace)
{
	size_t		pos;
	size_t		i = 0;

	std::string	transformed;
	while ((pos = str.find(search, i)) != std::string::npos)
	{
		transformed += str.substr(i, pos - i);
		transformed += replace;
		i = pos + search.length();
	}
	return transformed;
}

int main(int ac, char **av)
{
	std::ostringstream	buffer;
	std::string			filecontent;

	if (ac != 4)
	{
		std::cout << "Incorrect number of args" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cout << "Cant open/find " + filename << std::endl;
		return (1);
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Cant open/find " + filename + ".replace" << std::endl;
		return (1);
	}
	buffer << infile.rdbuf();
	filecontent = buffer.str();
	std::string	replaced = transform(filecontent, av[2], av[3]);
	outfile << replaced << std::endl;
	outfile.close();
	infile.close();
}
