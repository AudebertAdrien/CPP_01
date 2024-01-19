/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:16:02 by motoko            #+#    #+#             */
/*   Updated: 2024/01/19 15:35:21 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace()
{
	std::cout << "Contructor Replace!" << std::endl;
}

Replace::~Replace()
{
	std::cout << "Destructor Replace!" << std::endl;
}

std::string	Replace::ft_replace(std::string content, std::string s1, std::string s2)
{
	if (s1.empty())
		return (content);
	size_t	index = content.find(s1);
	std::cout << index << std::endl;
	while (index != std::string::npos)
	{
		content.erase(index, s1.size());	
		content.insert(index, s2);
		index = content.find(s1);
	}
	return (content);
}
