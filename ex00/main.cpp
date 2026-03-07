/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:20:07 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/07 12:12:20 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string	entry;

	std::cout << "Name of my first clapstrap : ";
	if (!getline(std::cin, entry))
	{
		std::cout << "Eof or problem appared" << std::endl;
		return (0);
	}
	ClapTrap a(entry);
	std::cout << "Name of my second clapstrap : ";
	if (!getline(std::cin, entry))
	{
		std::cout << "Eof or problem appared" << std::endl;
		return (0);
	}
	ClapTrap b(entry);
	while(1)
	{
		std::cout << "what you want to do with the first claptrap: " << std::endl;
		std::cout << "attack or repaired: ";
		if (!getline(std::cin, entry))
		{
			std::cout << "Eof or problem appared" << std::endl;
			break;
		}
		if (strcmp(entry.c_str(), "attack") == 0)
		{
			a.attack(b.getName());
			b.takeDamage(1);
		}
		else if (strcmp(entry.c_str(), "repaired") == 0)
			a.beRepaired(1);
		else
			std::cout << "unknown move" << std::endl;

	}
	return (0);
}
