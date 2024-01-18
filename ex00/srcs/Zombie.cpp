/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:36:31 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 16:48:41 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor Zombie!" << std::endl;
	_name = "toto";
	announce();
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor Zombie with params!" << " : " << name << std::endl;
	_name = name;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor Zombie!" << " : " << _name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
