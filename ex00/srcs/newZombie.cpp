/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:44:40 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 20:07:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *aZombie = new Zombie(name);
	return (aZombie);
}

