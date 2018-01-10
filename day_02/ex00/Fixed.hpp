/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:18:16 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 10:35:30 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		static const int		_frac = 8;
		int						_rawBits;

	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		Fixed &		operator=( Fixed const & src );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
