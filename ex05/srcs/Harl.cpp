/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:03:45 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 14:46:50 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Harl constructor" << std::endl;

	_t[0] = &Harl::debug;
	_t[1] = &Harl::info;
	_t[2] = &Harl::warning;
	_t[3] = &Harl::error;
}

void	Harl::complain(std::string level)
{
	if (level == "DEBUG")
		(this->*_t[0])();
	if (level == "INFO")
		(this->*_t[1])();
	if (level == "WARNING")
		(this->*_t[2])();
	if (level == "ERROR")
		(this->*_t[3])();
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
