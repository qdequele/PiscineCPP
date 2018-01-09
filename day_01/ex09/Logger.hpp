/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:25:17 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 17:10:37 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <ctime>
# include <iomanip>

class Logger {
	private:
		std::string	_filePath;

		void		logToConsole(std::string const & str);
		void		logToFile(std::string const & str);
		std::string	makeLogEntry(std::string str) const;

	public:
		Logger(std::string filename);
		~Logger();

		void	log(std::string const & dest, std::string const & message);
};

#endif
