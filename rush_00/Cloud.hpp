/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cloud.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 19:30:33 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 19:30:42 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOUD_HPP
# define CLOUD_HPP

# include <iostream>
# include <string>

class Cloud {
	private:
		int		_val;

	public:
		Cloud();
		Cloud(Cloud const & src);
		~Cloud();

		Cloud &			operator=( Cloud const & rhs );
};

#endif
