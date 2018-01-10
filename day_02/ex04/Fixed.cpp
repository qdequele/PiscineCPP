/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:56:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 14:44:27 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//
// CONSTRUCTORS / DESTRUCTORS
//

Fixed::Fixed() : _rawBits(0) {
}

Fixed::Fixed(int raw) : _rawBits(raw << Fixed::_frac) {
}

Fixed::Fixed(float raw) : _rawBits(roundf(raw * (1 << Fixed::_frac))) {
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::~Fixed() {
}

//
// OPERATOR
//

Fixed &		Fixed::operator=( Fixed const & rhs ) {
	if ( this != &rhs )
		this->_rawBits = rhs.getRawBits();
	return *this;
}

bool			Fixed::operator >	( Fixed const & rhs ) {
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator <	( Fixed const & rhs ) {
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator >=	( Fixed const & rhs ) {
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator <=	( Fixed const & rhs ) {
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator ==	( Fixed const & rhs ) {
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator !=	( Fixed const & rhs ) {
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed &			Fixed::operator +	( Fixed const & rhs ) {
	Fixed	*tmp = new Fixed(this->toFloat() + rhs.toFloat());
	return *tmp;
}

Fixed &			Fixed::operator -	( Fixed const & rhs ) {
	Fixed	*tmp = new Fixed(this->toFloat() - rhs.toFloat());
	return *tmp;
}

Fixed &			Fixed::operator *	( Fixed const & rhs ) {
	Fixed	*tmp = new Fixed(this->toFloat() * rhs.toFloat());
	return *tmp;
}

Fixed &			Fixed::operator /	( Fixed const & rhs ) {
	Fixed	*tmp = new Fixed(this->toFloat() / rhs.toFloat());
	return *tmp;
}

Fixed& 			Fixed::operator ++ () {
	this->_rawBits += 1;
	return *this;
}

Fixed& 			Fixed::operator -- () {
	this->_rawBits -= 1;
	return *this;
}

Fixed 			Fixed::operator ++ ( int v ) {
	if (v == 0)
		v++;
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits);
	this->_rawBits += v;
	return tmp;
}

Fixed 			Fixed::operator -- ( int v ) {
	if (v == 0)
		v++;
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits);
	this->_rawBits -= v;
	return tmp;
}

//
// METHOD
//

int Fixed::getRawBits( void ) const {
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)this->_rawBits / (1 << Fixed::_frac);
}

int		Fixed::toInt( void ) const {
	return this->_rawBits >> Fixed::_frac;
}

//
// STATIC NON-METHOD
//

Fixed const &		Fixed::min( Fixed const & lhs, Fixed const & rhs ) {
	if (lhs.toFloat() < rhs.toFloat())
		return lhs;

	return rhs;
}

Fixed const &		Fixed::max( Fixed const & lhs, Fixed const & rhs ) {
	if (lhs.toFloat() > rhs.toFloat())
		return lhs;
	return rhs;
}


//
// EXT-OPERATOR
//

std::ostream & operator<<( std::ostream & o, Fixed const & f) {
	o << f.toFloat();
	return o;
}
