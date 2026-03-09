/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:53:35 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/09 11:24:46 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
	return *this;
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
		<< ", causing " << this->_attackDamage << " point of damage" << std::endl;
	this->_energyPoints -= 1;
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
