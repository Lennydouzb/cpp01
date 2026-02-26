/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:37:51 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 19:54:52 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has been destructed" << std::endl;
}
