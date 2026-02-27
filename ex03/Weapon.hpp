/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:38:35 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/27 17:01:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>

class Weapon
{
private:
	std::string type;
public:
	std::string getType();
	void		setType(std::string type);
	Weapon( void );
	Weapon(std::string type);
};
