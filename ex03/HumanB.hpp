/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:53:16 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/09 00:41:11 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon	*aWeapon;
public:
	Weapon	getWeapon();
	std::string getName();
	HumanB(std::string name, Weapon &Weapon);
	HumanB(std::string name);
	void	setWeapon(Weapon &aWeapon);
	void	attack();
};
