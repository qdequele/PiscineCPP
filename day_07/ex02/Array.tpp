/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:32:29 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/17 14:58:03 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdexcept>
# include <iostream>
# include <string>

template <typename T>
class Array {
	private:
		T				*_content;
		unsigned int	_size;

	public:
		Array<T>(): _content(nullptr), _size(0) {}

		Array<T>(unsigned int n){
			_content =  new T[n];
			_size = n;
		}

		Array<T>( Array<T> const & src) {
			*this = src;
		}

		~Array<T>() {
			if (_content != nullptr) {
				delete [] _content;
			}
		}

		Array<T> &			operator=( Array<T> const & src ) {
			_content = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++) {
				_content[i] = src[i];
			}
			_size = src.size();
		}

		T &			operator[](unsigned int i) {
			if (i >= _size ) {
				throw Array::OutOfBounds();
			}
			return _content[i];
		}

		class OutOfBounds: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "You are out of bounds";
				}
		};

		unsigned int	size() {
			return _size;
		}
};
