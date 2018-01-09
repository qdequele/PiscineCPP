/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:25:04 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 09:39:05 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony {
	private:
		std::string	_name;
		int 		_age;
		int 		_size;
		std::string	_color;

	public:
		Pony(std::string name, int age, int size, std::string color);
		~Pony();
};

#endif