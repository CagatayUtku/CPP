/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:33:23 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/07 16:53:04 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		//conversion functions
		float toFloat(void) const;
		int toInt(void) const;
		//constructors and destructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(const Fixed& copy);
		//getters and setters
		int getRawBits(void) const;
		void setRawBits(int const raw);
		//comparison operators
		bool operator>(const Fixed& copy) const;
		bool operator<(const Fixed& copy) const;
		bool operator>=(const Fixed& copy) const;
		bool operator<=(const Fixed& copy) const;
		bool operator==(const Fixed& copy) const;
		bool operator!=(const Fixed& copy) const;
		//arithmetic operators
		Fixed operator+(const Fixed& copy);
		Fixed operator-(const Fixed& copy);
		Fixed operator*(const Fixed& copy);
		Fixed operator/(const Fixed& copy);
		// increment and decrement functions
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		// min and max functions
		static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif