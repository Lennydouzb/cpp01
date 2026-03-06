/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:50:25 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 12:24:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;
	
	if (ac > 1)
	{
		std::string str = av[1];
		Harl.setLevel(str);
	}
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("ERROR");
	Harl.complain("WARNING");
	Harl.complain("DOOM");
	return (0);
}
