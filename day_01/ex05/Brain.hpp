/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:33:02 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:02:43 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iostream>

class Brain {
	private:
		void	*mem;

	public:
		Brain();
		~Brain();

		std::string	identify();
		void		setMem(void *addr);
};

#endif