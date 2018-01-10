/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:18:16 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 14:15:26 by qdequele         ###   ########.fr       */
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

		Fixed &			operator =	( Fixed const & rhs );
		bool			operator >	( Fixed const & rhs );
		bool			operator <	( Fixed const & rhs );
		bool			operator >=	( Fixed const & rhs );
		bool			operator <=	( Fixed const & rhs );
		bool			operator ==	( Fixed const & rhs );
		bool			operator !=	( Fixed const & rhs );

		Fixed &			operator +	( Fixed const & rhs );
		Fixed &			operator -	( Fixed const & rhs );
		Fixed &			operator *	( Fixed const & rhs );
		Fixed &			operator /	( Fixed const & rhs );

		Fixed& 			operator ++ ();
		Fixed& 			operator -- ();
		Fixed 			operator ++ ( int v);
		Fixed 			operator -- ( int v);

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed const &		min( Fixed const & lhs, Fixed const & rhs );
		static Fixed const &		max( Fixed const & lhs, Fixed const & rhs );

};

std::ostream & operator<<( std::ostream & o, Fixed const & f);

#endif
