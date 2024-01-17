/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:36:57 by motoko            #+#    #+#             */
/*   Updated: 2024/01/17 14:29:01 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA();
		HumanA(std::string name, Weapon &club);
		~HumanA();

		void    attack(void);
	private:
		std::string		_name;
		const Weapon	&_weapon;
};

#endif
