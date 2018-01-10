/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:56:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 12:37:29 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int raw) : _rawBits(raw << Fixed::_frac) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float raw) : _rawBits(roundf(raw * (1 << Fixed::_frac))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


Fixed &		Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_rawBits = rhs.getRawBits();

	return *this;
}


int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)this->_rawBits / (1 << Fixed::_frac);
}

int		Fixed::toInt( void ) const {
	return this->_rawBits >> Fixed::_frac;
}


std::ostream & operator<<( std::ostream & o, Fixed const & f) {
	o << f.toFloat();

	return o;
}
