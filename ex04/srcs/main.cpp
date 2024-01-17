/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:41:18 by motoko            #+#    #+#             */
/*   Updated: 2024/01/17 16:16:15 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string const filename("./filename");
		std::string const filename_replace("./filename.replace");
		std::ifstream ifs;
		std::ofstream ofs;
		std::string line;

		ifs.open(filename.c_str());
		ofs.open(filename_replace.c_str());
		if (!ifs || !ofs)
		{
			std::cerr << "Unable to open file." << std::endl;
			return (1);
		}
		while (ifs >> line)
		{
			if (line == argv[2])
				ofs << argv[3] << " ";
			else
				ofs << line << " ";
		}
		ofs << '\n';
		ifs.close();
	}
	return (0);
}
