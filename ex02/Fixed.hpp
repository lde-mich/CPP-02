/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/15 12:34:38 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int numberFixed;
		static const int nBit = 8;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		static Fixed &min (Fixed &a, Fixed &b);
		static Fixed &max (Fixed &a, Fixed &b);
		static Fixed const &min (Fixed const &a, Fixed const &b);
		static Fixed const &max (Fixed const &a, Fixed const &b);
		
		//Comparison operators
		void operator = (Fixed const &fixed);
		bool operator > (Fixed const &fixed);
		bool operator < (Fixed const &fixed);
		bool operator >= (Fixed const &fixed);
		bool operator <= (Fixed const &fixed);
		bool operator == (Fixed const &fixed);
		bool operator != (Fixed const &fixed);
		
		//Arithmetic operators
		Fixed operator + (Fixed const &fixed);
		Fixed operator - (Fixed const &fixed);
		Fixed operator * (Fixed const &fixed);
		Fixed operator / (Fixed const &fixed);

		//Increment and decrement

		//Pre
		int& operator++();
		int& operator--();
		
		//Post
		int operator++(int);
		int operator--(int);
		
		float toFloat(void) const;
		int toInt(void) const;
		
		Fixed(Fixed const &o);
		Fixed(int const num);
		Fixed(float const num);
		Fixed();
		
		~Fixed();
};
 
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);