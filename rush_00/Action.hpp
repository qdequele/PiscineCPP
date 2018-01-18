/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:50:38 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 14:32:02 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_HPP
# define ACTION_HPP

# include <iostream>
# include <string>

# include <time.h>
# include <sys/timeb.h>
# include <unistd.h>
# include <stdlib.h>


class Action {
	private:
		int		_refTimer;
		int		_newTimer;
		int		_diffTime;

		int 	_getMilliCount();

	public:
		Action();
		Action(int diff);
		Action(Action const & src);
		~Action();

		bool				update();

		Action &			operator=( Action const & rhs );
};


#endif
