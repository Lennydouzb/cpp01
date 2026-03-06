/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:50:25 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 11:52:02 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(void)
{
	Harl Harl;

	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("ERROR");
	Harl.complain("WARNING");
	Harl.complain("DOOM");
	return (0);
}
