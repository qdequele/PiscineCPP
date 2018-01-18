/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:57:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/16 14:58:38 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <iomanip>
# include <time.h>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

char	randomAlpha() {
	int randomVal = 0;
	while (!((randomVal >= 64 && randomVal <= 90) || (randomVal >= 97 && randomVal <= 122) || (randomVal >= 48 && randomVal <= 57))) {
		randomVal = rand() % 130;
	}
	return static_cast<char>(randomVal);
}

void * serialize( void ) {
	char	a[9];
	int		i = rand();
	char	b[9];

	for (int i = 0; i < 8; i++) {
		a[i] = randomAlpha();
		b[i] = randomAlpha();
	}
	a[8] = '\0';
	b[8] = '\0';

	Data* data = new Data;
	data->s1 = static_cast<std::string>(a);
	data->n = i;
	data->s2 = static_cast<std::string>(b);

	std::cout << "Serialize : " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "b: " << b << std::endl;
	return static_cast<void *>(data);
}

Data * deserialize( void * raw ) {
	std::cout << "Deserialize : " << std::endl;
	return static_cast<Data *>(raw);
}

int		main() {
	srand (time(NULL));

	void *ser = serialize();

	std::cout << std::endl;

	Data * data = deserialize(ser);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	return (0);
}
