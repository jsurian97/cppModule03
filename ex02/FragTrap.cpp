/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:59:52 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/09 11:30:12 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "Constructor FragTrap called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& source) :
	ClapTrap(source)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = source;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& source)
{
	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << target << " has no more hit points"
			<< " or no more energy"<< std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target
		<< ", causing " << this->_attackDamage << " point of damage" << std::endl;
	this->_energyPoints -= 1;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is high fiving"
		<< std::endl;
}
