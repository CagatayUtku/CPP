/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:53:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/14 19:13:31 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>

class PmergeMe
{
	private:
		std::vector<unsigned int>		_input;
		std::vector<unsigned int>		_jacobsthal;
	public:
		PmergeMe(void);
		PmergeMe(char **argv);
		PmergeMe(PmergeMe const &src);
		~PmergeMe(void);
		PmergeMe	&operator=(PmergeMe const &rhs);
		void		createJacobsthal(void);
		void		createInput(char **argv);
		unsigned int	isPositiveInteger(const std::string &str);
		void		createPairs(void);
		void		sortPairs(void);
		void		swap(PmergeMe &rhs);
};

void printJacobsthal(std::vector<unsigned int> &jacobsthal);
void printInput(std::vector<unsigned int> &input);

#endif