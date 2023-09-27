/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:22:22 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 17:51:28 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	Replace::createReplaceFile()
{
	std::ifstream inputFile(this->filename);
	std::ofstream outputFile(this->newFilename);
	std::string line;

	if (!inputFile)
	{
		std::cout<<"Error: "<< this->filename << " file does not exist"<<std::endl;
		exit (EXIT_FAILURE);
	}
	if (!outputFile)
	{
		std::cout<<"Error: " << this->newFilename << " file could not be created"<<std::endl;
		exit (EXIT_FAILURE);
	}
	while (std::getline(inputFile, line))
	{
		modifyLine(&line);
		outputFile<<line<<std::endl;
	}
	inputFile.close();
	outputFile.close();
}

void Replace::modifyLine(std::string *line)
{
	size_t pos;

	while (line->find(this->s1) != std::string::npos)
	{
		pos = line->find(this->s1);
		line->erase(line->find(this->s1), this->s1.length());
		line->insert(pos, this->s2);
	}
}
