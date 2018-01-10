/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:18:16 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 11:31:34 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		static const int		_frac = 8;
		int						_rawBits;

	public:
		Fixed();
		Fixed(int raw);
		Fixed(float raw);
		Fixed(Fixed const & src);
		~Fixed();

		Fixed &		operator=( Fixed const & src );

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & f);

#endif
