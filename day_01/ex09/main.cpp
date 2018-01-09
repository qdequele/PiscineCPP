/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:25:28 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 17:12:55 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main () {
	Logger logger("ex.log");

	logger.log("logToConsole", "logToConsole");
	logger.log("logToFile", "logToFile");

	return (0);
}
