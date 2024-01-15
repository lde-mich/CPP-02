/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/10 23:36:54 by lde-mich         ###   ########.fr       */
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
		void operator = (Fixed const &fixed);
		float toFloat(void) const;
		int toInt(void) const;
		
		Fixed(Fixed const &o);
		Fixed(int const num);
		Fixed(float const num);
		Fixed();
		
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);