/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:19:17 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 17:50:27 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;
		std::string newFilename;
	public:
		Replace(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2)
		{
			this->newFilename = filename + ".replace";
		};
		~Replace(){};
		void	createReplaceFile();
		void	modifyLine(std::string *line);
};

#endif