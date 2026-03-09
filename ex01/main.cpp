/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:20:07 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/09 11:31:53 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	std::cout << "Name of my first scavstrap : ";
	if (!getline(std::cin, entry))
	{
		std::cout << "Eof or problem appared" << std::endl;
		return (0);
	}
	ScavTrap b(entry);
	while(1)
	{
		std::cout << "what you want to do with the first slavtrap: " << std::endl;
		std::cout << "attack, repaired or gate: ";
		if (!getline(std::cin, entry))
		{
			std::cout << "Eof or problem appared" << std::endl;
			break;
		}
		if (strcmp(entry.c_str(), "attack") == 0)
		{
			b.attack(a.getName());
			a.takeDamage(1);
		}
		else if (strcmp(entry.c_str(), "repaired") == 0)
			b.beRepaired(1);
		else if (strcmp(entry.c_str(), "gate") == 0)
			b.guardGate();
		else
			std::cout << "unknown move" << std::endl;

	}
	return (0);
}
