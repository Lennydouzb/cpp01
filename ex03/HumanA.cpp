/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:48:30 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/27 17:40:28 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, ::Weapon &aWeapon) : name(name), aWeapon(aWeapon)
{
	this->aWeapon = aWeapon;
	this->name = name;
}
void HumanA::attack()
{
	std::cout << this->name <<  " attacks with their " << this->aWeapon.getType() << std::endl;
}
