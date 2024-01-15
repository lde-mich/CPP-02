/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:36 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/15 11:51:45 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor
Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    this->numberFixed = 0;
}

Fixed::Fixed(Fixed const &o)
{
    *this = o;
    std::cout<<"Copy constructor called"<< std::endl;
}

Fixed::Fixed(int const num)
{
    std::cout<<"int constructor called"<< std::endl;
    
    this->numberFixed = num<<this->nBit;
}

Fixed::Fixed(float const num)
{
    std::cout<<"float constructor called"<< std::endl;
    
     this->numberFixed = roundf(num * pow(2, this->nBit));
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}


//Comparison operators
void Fixed::operator = (Fixed const &fixed)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    this->numberFixed = fixed.getRawBits();
}

bool Fixed::operator > (Fixed const &fixed)
{
    if(this->numberFixed > fixed.getRawBits)
		return (true);
	else
		return(false);
}

bool Fixed::operator < (Fixed const &fixed)
{
    
}

bool Fixed::operator >= (Fixed const &fixed)
{
    
}

bool Fixed::operator <= (Fixed const &fixed)
{
    
}

bool Fixed::operator == (Fixed const &fixed)
{
    
}

bool Fixed::operator != (Fixed const &fixed)
{
    
}


//Arithmetic operators
void Fixed::operator + (Fixed const &fixed)
{
    
}

void Fixed::operator - (Fixed const &fixed)
{
    
}

void Fixed::operator * (Fixed const &fixed)
{
    
}

void Fixed::operator / (Fixed const &fixed)
{
    
}


//Increment and decrement

//Pre
int& Fixed::operator++()
{
    ++this->numberFixed;
    return this->numberFixed;
}

int& Fixed::operator--()
{
    --this->numberFixed;
    return this->numberFixed;
}

//Post
int Fixed::operator++(int)
{
    int temp = this->numberFixed;
    ++this->numberFixed;
    return temp;
}

int Fixed::operator--(int)
{
    int temp = this->numberFixed;
    --this->numberFixed;
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


std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

























