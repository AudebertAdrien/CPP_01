/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:36:03 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 16:51:20 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie *newZombie(std::string name);

int	main(void)
{
	Zombie	z1;
	Zombie	*z2;

	randomChump("Hippo");
	z2 = newZombie("Hippo the revenant");
	delete(z2);
	return (0);
}
