/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:24:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 11:57:37 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug( void )
{
	std::cout << "[debug]   || I love having extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[info]    || I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[warning] || I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << "years, whereas you started working here just last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[error]   || This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"ERROR", "DEBUG", "WARNING", "INFO"};
	void	(Harl::*ptrfunc[4])() = {&Harl::_error, &Harl::_debug, &Harl::_warning, &Harl::_info};
	int	i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*ptrfunc[i])();
			return ;
		}
		++i;
	}
}
