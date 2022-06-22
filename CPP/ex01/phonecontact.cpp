/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonecontact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:34:59 by ted-dafi          #+#    #+#             */
/*   Updated: 2022/06/22 12:40:22 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenum;
		std::string	darkest_secret;
		std::string	End;
};

void	print_string(int len, char *s)
{
	std::cout << s << '\n';
}

void	check_lens(Contact contact, int *batata)
{
	std::string	*s;

	s = (std::string *)&contact;
	while (!s->empty())
	{
		print_string(s->length(), (char *)&(*s));
		s++;
	}
}

class PhoneBook
{
	private:
		Contact contacts[8];
		int		batata[4];
	public:
		int i;
		void set_contact(int index)
		{
			std::cout << "Fisrt Name: ";
			std::cin >> contacts[index].first_name;
			std::cout << "Last Name: ";
			std::cin >> contacts[index].last_name;
			std::cout << "NickName: ";
			std::cin >> contacts[index].nickname;
			std::cout << "Phone Number: ";
			std::cin >> contacts[index].phonenum;
			std::cout << "Darkest secret: ";
			std::cin >> contacts[index].darkest_secret;
			contacts[index].End.clear();
		}
		void print(int i)
		{
			i = 0;
			while (i < 8)
			{
			check_lens(contacts[i], batata);
				i++;
			}
		}
};

int	main()
{
	PhoneBook book;

	book.set_contact(1);
	book.print(1);
}