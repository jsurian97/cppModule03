/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:23:25 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/09 11:29:11 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& source) :
	ClapTrap(source)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = source;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& source)
{
	std::cout << "Copy assignment operator ScavTrap called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << target << " has no more hit points"
			<< " or no more energy"<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << this->_attackDamage << " point of damage" << std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode"
		<< std::endl;
}
