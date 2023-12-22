/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:40 by lde-mich          #+#    #+#             */
/*   Updated: 2023/12/22 17:45:22 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int numberFixed;
		static int nBit;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		void operator = (Fixed const &fixed);
		Fixed(Fixed const &o);
		Fixed();
		~Fixed();
};