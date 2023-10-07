/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:19:17 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 17:43:07 by Cutku            ###   ########.fr       */
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
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		void	createReplaceFile();
		void	modifyLine(std::string *line);
};

#endif