/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:33:36 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:06:57 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>

# include "Brain.hpp"

class Human {
	private:
		Brain	*brain;
	public:
		Human();
		~Human();

		std::string	identify();
		Brain& getBrain();
};

#endif