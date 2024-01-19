/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:30:43 by motoko            #+#    #+#             */
/*   Updated: 2024/01/19 16:52:05 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl h1;

	h1.complain("DEBUG");
	h1.complain("INFO");
	h1.complain("WARNING");
	h1.complain("ERROR");
	return (0);
}
