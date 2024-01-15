/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:57:27 by motoko            #+#    #+#             */
/*   Updated: 2024/01/15 18:25:03 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
	private :
		std::string _name;
};
#endif
