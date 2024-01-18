/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:03:45 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 16:23:40 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl() {
	_t[0] = &Harl::debug;
	_t[1] = &Harl::info;
	_t[2] = &Harl::warning;
	_t[3] = &Harl::error;
}

int		level_to_nb(std::string level)
{
	if(level == "DEBUG")
		return (0);
	if(level == "INFO")
		return (1);
	if(level == "WARNING")
		return (2);
	if(level == "ERROR")
		return (3);
	return (-1);
}

void	Harl::complain(std::string level)
{
	int		nb_level = level_to_nb(level);
	switch (nb_level)
	{
		case 0:
			(this->*_t[0])();
		case 1:
			(this->*_t[1])();
		case 2:
			(this->*_t[2])();
		case 3:
			(this->*_t[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
