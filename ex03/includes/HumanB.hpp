/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:37:47 by motoko            #+#    #+#             */
/*   Updated: 2024/01/16 19:31:02 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &club);
		void	attack(void);
	private:
		std::string		_name;
		const Weapon	*_weapon;
};

#endif
