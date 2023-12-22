/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:36 by lde-mich          #+#    #+#             */
/*   Updated: 2023/12/22 17:47:10 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    this->numberFixed = 0;
    this->nBit = 8;
}

Fixed::Fixed(Fixed const &o)
{
    this->numberFixed = o.numberFixed;
    this->nBit = o.nBit;
    std::cout<<"Copy constructor called"<< std::endl;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}

void Fixed::operator = (Fixed const &fixed)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<< std::endl;
}

void Fixed::setRawBits(int const raw)
{
    
}