/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:34:51 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/27 15:49:10 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cctype>
# include <string>
class Zombie
{
private:
	std::string name;
public:
	void	announce(void);
	Zombie(std::string name);
	Zombie( void );
	~Zombie(void);
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif
