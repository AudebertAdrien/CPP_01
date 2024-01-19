/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:41:18 by motoko            #+#    #+#             */
/*   Updated: 2024/01/19 16:26:16 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <replace.hpp>

int	main(int argc, char **argv)
{
	Replace obj;

	if (argc != 4)
	{
		std::cerr << "Error: Incorrect number of arguments" << std::endl;
		return (1);
	}

	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error: Unable to open input file" << std::endl;
		return (1);
	}
	std::string result;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::getline(ifs, result, '\0');
	ifs.close();

	result = obj.ft_replace(result, s1, s2);
	
	std::string outputFilename = std::string(argv[1]) + ".replace";
	std::ofstream ofs(outputFilename.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error: Unable to open output file" << std::endl;
		return (1);
	}
	ofs << result;
	ofs.close();

	return (0);
}
