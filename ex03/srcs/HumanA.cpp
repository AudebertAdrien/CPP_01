/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:46:46 by motoko            #+#    #+#             */
/*   Updated: 2024/01/16 19:31:30 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA() : _weapon(Weapon()) {
	std::cout << "HumanA Constructor" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club) {
	std::cout << "HumanA Constructor with params" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA Destructor" << std::endl;
}

void	HumanA::attack(void) {

	std::cout << _name << " attacks with their "<< _weapon.getType() << std::endl;	
}
