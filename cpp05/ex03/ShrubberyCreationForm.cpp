/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:08:28 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 15:49:16 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("NoTarget")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;	
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::ofstream file;
	file.open((this->_target + "_shrubbery").c_str());
	file << "                                                         .\n";
	file << "                                              .         ;  \n";
	file << "                 .              .              ;%     ;;   \n";
	file << "                   ,           ,                :;%  %;   \n";
	file << "                    :         ;                   :;%;'     .,   \n";
	file << "           ,.        %;     %;            ;        %;'    ,;\n";
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,'%\n";
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
	file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
	file << "                    `:%;.  :;bd%;          %;@%;'\n";
	file << "                      `@%:.  :;%.         ;@@%;'   \n";
	file << "                        `@%.  `;@%.      ;@@%;         \n";
	file << "                          `@%%. `@%%    ;@@%;        \n";
	file << "                            ;@%. :@%%  %@@%;       \n";
	file << "                              %@bd%%%bd%%:;     \n";
	file << "                                #@%%%%%:;;\n";
	file << "                                %@@%%%::;\n";
	file << "                                %@@@%(o);  . '         \n";
	file << "                                %@@@o%;:(.,'         \n";
	file << "                            `.. %@@@o%::;         \n";
	file << "                               `)@@@o%::;         \n";
	file << "                                %@@(o)::;        \n";
	file << "                               .%@@@@%::;         \n";
	file << "                               ;%@@@@%::;.          \n";
	file << "                              ;%@@@@%%:;;;. \n";
	file << "                          ...;%@@@@@%%:;;;;,..\n";
	file.close();
}
