/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:55:03 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/08 16:09:47 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructors and destructor

Fixed::Fixed(void) : value(0) 
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::bits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->value = copy.getRawBits();
	return (*this);
}

//getters and setters

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

//conversion functions

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}

// insertion operator

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

//comparison operators

bool Fixed::operator>(const Fixed& copy) const
{
	if (this->value > copy.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& copy) const
{
	if (this->value < copy.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& copy) const
{
	if (this->value >= copy.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& copy) const
{
	if (this->value <= copy.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& copy) const
{
	if (this->value == copy.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& copy) const
{
	if (this->value != copy.getRawBits())
		return (true);
	return (false);
}

//arithmetic operators

Fixed Fixed::operator+(const Fixed& copy)
{
	Fixed temp(this->toFloat() + copy.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& copy)
{
	Fixed temp(this->toFloat() - copy.toFloat());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& copy)
{
	Fixed temp(this->toFloat() * copy.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed& copy)
{
	Fixed temp(this->toFloat() / copy.toFloat());
	return (temp);
}

// pre - increment and decrement functions

Fixed& Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

// post - increment and decrement functions

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return (temp);
}

// min and max functions

Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return ((Fixed&) a);
	return ((Fixed&) b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&) a);
	return ((Fixed&) b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
