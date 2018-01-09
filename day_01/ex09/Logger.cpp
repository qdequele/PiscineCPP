/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:25:21 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 17:17:48 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"


void Logger::logToConsole(std::string const & str) {
	std::cout << this->makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string const & str) {
	std::ofstream	ofs(this->_filePath, std::ios::out | std::ios::app);

	if (this->_filePath.size() == 0) {
		std::cout << "No filename set" << std::endl;
	}
	if (ofs == 0) {
		std::cout << "No such file \"" << this->_filePath << "\" found" << std::endl;
	}

	ofs << this->makeLogEntry(str) << std::endl;
}

std::string	Logger::makeLogEntry(std::string str) const {
	std::time_t time_now = std::time(nullptr);
	std::stringstream	ss;
	std::string			string;

	ss << std::put_time(std::localtime(&time_now), "[%Y-%m-%d__%OH:%OM:%OS]");
	ss >> string;
	return string + " " + str;
}

Logger::Logger(std::string filename): _filePath(filename) {}

Logger::~Logger() {}


void Logger::log(std::string const & dest, std::string const & message) {
	typedef void (Logger::*Actions)(std::string const & target);

	std::string actionsStr[2] = {"logToConsole", "logToFile"};
	Actions actions[2] = {&Logger::logToConsole, &Logger::logToFile};

	for (int i = 0; i < 3; i++) {
		if (actionsStr[i] == dest)
		{
			(this->*(actions[i]))(message);
			break;
		}
	}
}
