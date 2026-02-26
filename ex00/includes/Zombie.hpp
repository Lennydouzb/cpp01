/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:34:51 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 20:07:39 by ldesboui         ###   ########.fr       */
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
	~Zombie(void);
};
Zombie *newZombie(std::string name);
void	randomChump(std::string name);
#endif
