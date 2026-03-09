/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:53:56 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/09 00:41:24 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, ::Weapon &aWeapon)
{
	this->aWeapon = &aWeapon;
	this->name = name;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->aWeapon = NULL;
}

void HumanB::attack()
{
	if (this->aWeapon == NULL)
		std::cout << this->name <<  " has no weapon !" << std::endl;
	else
		std::cout << this->name <<  " attacks with their " << this->aWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &aWeapon)
{
	this->aWeapon = &aWeapon;
}
