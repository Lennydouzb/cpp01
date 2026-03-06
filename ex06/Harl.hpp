/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:18:54 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 12:35:07 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Harl
{
private:
	int		level;
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
public:
	void	complain( std::string level );
	void	setLevel(std::string level);
	Harl( void );
};
