/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:02:57 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/08 15:19:27 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact {
	public:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	login;
		std::string	postalAddress;
		std::string	emailAddress;
		std::string	phoneNumber;
		std::string	birthdayDate;
		std::string	favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;

		Contact(void);
		~Contact(void);

		void add(void);
		void show(void);
		void showComplete(void);
		bool isEmpty(void);

	private:
		void showString(std::string s);

};

#endif