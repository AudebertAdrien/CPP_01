/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:37:06 by motoko            #+#    #+#             */
/*   Updated: 2024/01/16 19:30:44 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string getType(void) const;
		void setType(std::string new_type);
	private:
		std::string _type;
};

#endif
