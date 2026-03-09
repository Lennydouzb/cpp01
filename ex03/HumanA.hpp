/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:45:14 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/09 00:41:31 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon	&aWeapon;
public:
	::Weapon	getWeapon();
	std::string getName();
	HumanA(std::string name, Weapon &Weapon);
	void	attack();
};
