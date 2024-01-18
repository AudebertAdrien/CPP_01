/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:46:49 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 17:07:19 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() : _name(), _weapon() {
	std::cout << "HumanB Constructor" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _weapon() {
	std::cout << "HumanB Constructor with params" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB Destructor" << std::endl;
}

void	HumanB::attack(void) {

	std::cout << _name << " attacks with their "<< _weapon->getType() << std::endl;	
}

void	HumanB::setWeapon(Weapon &club) {
	_weapon = &club;	
}
