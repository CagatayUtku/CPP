/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:29:29 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/27 13:30:43 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonFrom : AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonFrom();
		PresidentialPardonFrom(std::string target);
		PresidentialPardonFrom(const PresidentialPardonFrom& copy);
		~PresidentialPardonFrom();
		PresidentialPardonFrom& operator=(const PresidentialPardonFrom& copy);

		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif