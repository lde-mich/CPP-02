/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:36 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/17 17:28:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor
Fixed::Fixed()
{
    // std::cout<<"Default constructor called"<< std::endl;
    this->numberFixed = 0;
}

Fixed::Fixed(Fixed const &o)
{
    *this = o;
    // std::cout<<"Copy constructor called"<< std::endl;
}

Fixed::Fixed(int const num)
{
    // std::cout<<"int constructor called"<< std::endl;
    
    this->numberFixed = num<<this->nBit;
}

Fixed::Fixed(float const num)
{
    // std::cout<<"float constructor called"<< std::endl;
    
     this->numberFixed = roundf(num * pow(2, this->nBit));
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<< std::endl;
}


//Comparison operators
void Fixed::operator = (Fixed const &fixed)
{
    // std::cout<<"Copy assignment operator called"<< std::endl;
    this->numberFixed = fixed.getRawBits();
}

bool Fixed::operator > (Fixed const &fixed)
{
    if(this->numberFixed > fixed.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator < (Fixed const &fixed)
{
    if(this->numberFixed < fixed.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator >= (Fixed const &fixed)
{
    if(this->numberFixed >= fixed.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator <= (Fixed const &fixed)
{
    if(this->numberFixed <= fixed.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator == (Fixed const &fixed)
{
    if(this->numberFixed == fixed.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator != (Fixed const &fixed)
{
    if(this->numberFixed != fixed.getRawBits())
		return (true);
	else
		return(false);
}


//Arithmetic operators
Fixed Fixed::operator + (Fixed const &fixed)
{
    Fixed temp;
	
	temp.numberFixed = this->numberFixed + fixed.getRawBits();
	
	return (temp);
}

Fixed Fixed::operator - (Fixed const &fixed)
{
    Fixed temp;
	
	temp.numberFixed = this->numberFixed - fixed.getRawBits();
	
	return (temp);
}

Fixed Fixed::operator * (Fixed const &fixed)
{
    Fixed temp;
	
	temp.numberFixed = this->numberFixed * fixed.getRawBits();
	
	return (temp);
}

Fixed Fixed::operator / (Fixed const &fixed)
{
    Fixed temp;
	
	temp.numberFixed = this->numberFixed / fixed.getRawBits();
	
	return (temp);
}


//Increment and decrement

//Pre
Fixed& Fixed::operator++()
{
    ++(this->numberFixed);
    return *this;
}

Fixed& Fixed::operator--()
{
    --(this->numberFixed);
    return *this;
}

//Post
Fixed Fixed::operator++(int)
{
    Fixed temp = (*this);
    (this->numberFixed)++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = (*this);
    (this->numberFixed)--;
    return temp;
}



int Fixed::getRawBits(void) const
{
    return this->numberFixed;
}

void Fixed::setRawBits(int const raw)
{
    this->numberFixed = raw;
}

float Fixed::toFloat(void) const
{
	return(this->numberFixed / pow(2, this->nBit));
}

int Fixed::toInt(void) const
{
    return (this->numberFixed>>this->nBit);
}


Fixed& Fixed::min (Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min (Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed& Fixed::max (Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max (Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}


std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

























