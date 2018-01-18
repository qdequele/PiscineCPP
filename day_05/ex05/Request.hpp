/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Request.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:37:57 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 19:45:39 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REQUEST_HPP
# define REQUEST_HPP

# include <iostream>
# include <string>

class Request {

	private:
		std::string	_name;
		std::strign	_target;

	public:
		Request(std::string name, std::string target);
		Request(Request const & src);
		~Request();

		Request &			operator=( Request const & rhs );
		bool				operator==( Request const & src);

		std::string			getName();
		std::string			getTarget();
};
