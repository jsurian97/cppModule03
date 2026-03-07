/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:53:35 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/07 12:13:58 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name)
{
	std::cout << "Constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << target << " has no more hit points"
			<< " or no more energy"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << "1 point of damage" << std::endl;
	this->_energyPoints -= 1;
	this->_attackDamage += 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more hit points"
			<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " take " << amount 
		<< " points of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more hit points"
			<< " or no more energy"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " be repaired of " << amount 
		<< " points of repaired" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= amount;
}

const std::string& ClapTrap::getName()
{
	return (this->_name);
}
