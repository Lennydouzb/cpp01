/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:56:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/26 20:10:55 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	std::cout << "creation with zombie :";
	Zombie z = Zombie("1");
	z.announce();
	std::cout << "creation with newZombie :";
	Zombie *zptr = newZombie("2");
	zptr->announce();
	std::cout << "creation and announce with randomchump, it should also destroy itself just after announcement:";
	randomChump("3");
	std::cout << "destruction of 2, (newZombie): ";
	delete zptr;
	return (0);
}
