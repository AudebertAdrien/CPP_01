/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:01:08 by motoko            #+#    #+#             */
/*   Updated: 2024/01/18 16:19:13 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class Harl {
	public:
		Harl();

		void complain(std::string level);
	private:
		void    (Harl::*_t[4])(void);

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
#endif

