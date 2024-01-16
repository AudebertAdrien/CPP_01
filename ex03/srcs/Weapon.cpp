/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:45:07 by motoko            #+#    #+#             */
/*   Updated: 2024/01/16 19:30:26 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon Constructor" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon Constructor with params" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon Destructor" << std::endl;
}

std::string	Weapon::getType(void) const {
	return (_type);	
}

void	Weapon::setType(std::string new_type) {
	_type = new_type;
}
