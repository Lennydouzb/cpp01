/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:56:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/27 16:03:38 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *aHorde;
	int	i = 0;

	std::cout << "creation of a zombie horde, they will all announce themselves and desroy themselves" << std::endl;
	aHorde = zombieHorde(10, "a Zombie from the horde");
	while (i < 10)
	{
		aHorde[i].announce();
		++i;
	}
	delete[] aHorde;
}
