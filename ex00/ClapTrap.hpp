/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:43:29 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/08 17:49:50 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define	CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstring>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& source);
		~ClapTrap();
		ClapTrap& operator= (const ClapTrap& source);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		const std::string&	getName();
};
#endif
//orthodox canonical ->
//default constructor 
//copyconstructor
//assignement operator
//default destructor
