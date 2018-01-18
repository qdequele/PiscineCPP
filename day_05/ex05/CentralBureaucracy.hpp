/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:12:36 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 19:43:40 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CENTRAL_BUREAUCRACY_HPP
# define CENTRAL_BUREAUCRACY_HPP

# include <iostream>
# include <string>

# include "OfficeBlock.hpp"
# include "Request.hpp"

class CentralBureaucracy {

	private:
		OfficeBlock*	_offices[20];
		Bureaucrat*		_waitingAgents[10];
		Request*		_requests[100];

	public:
		CentralBureaucracy();
		CentralBureaucracy(CentralBureaucracy const & src);
		~CentralBureaucracy();

		CentralBureaucracy &			operator=( CentralBureaucracy const & rhs );

		void				addAgent(Bureaucrat* agent);
};

#endif
