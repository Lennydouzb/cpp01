/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 13:57:49 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/27 16:03:27 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie *aHorde = new Zombie[N];
	int	i = 0;

	while (i < N)
	{
		aHorde[i].set_name(name);
		++i;
	}
	return (aHorde);
}

