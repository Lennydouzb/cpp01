/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:53:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/09 01:10:31 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes.h"
#include <sys/stat.h>

static std::string	transform(std::string str, std::string search, std::string replace)
{
	size_t		pos;
	size_t		i = 0;

	if (search.empty())
		return (str);
	std::string	transformed;
	while ((pos = str.find(search, i)) != std::string::npos)
	{
		transformed += str.substr(i, pos - i);
		transformed += replace;
		i = pos + search.length();
	}
	transformed += str.substr(i, pos - i);
	return transformed;
}

static  bool	checkFile(const std::string& path)
{
	struct stat structStat;

	if (stat(path.c_str(), &structStat) == 0)
		return (S_ISREG(structStat.st_mode));
	return false;
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
	if (!infile.is_open() || !checkFile(filename))
	{
		std::cout << "Cant open/find " + filename << std::endl;
		return (1);
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open() || !checkFile((filename + ".replace")))
	{
		std::cout << "Cant open/find " + filename + ".replace" << std::endl;
		return (1);
	}
	buffer << infile.rdbuf();
	filecontent = buffer.str();
	std::string	replaced = transform(filecontent, av[2], av[3]);
	outfile << replaced;
	outfile.close();
	infile.close();
}
