/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonecontact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:34:59 by ted-dafi          #+#    #+#             */
/*   Updated: 2022/06/24 10:47:40 by ted-dafi         ###   ########.fr       */
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

class VarNames
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenum;
		std::string	darkest_secret;
		VarNames()
		{
			first_name = "First Name: ";
			last_name = "Last Name: ";
			nickname = "NickName: ";
			phonenum = "Phone Number: ";
			darkest_secret = "Darkest Secret: ";
		}
};

void	print_string(int len, char *s)
{
	while (len < 9)
	{
		std::cout << ' ';
		len++;
	}
	if (len > 9)
	{
		s[9] = '.';
		s[10] = '\0';
	}
	std::cout << s;
}

void	display_contact(Contact contact, int index)
{
	std::string	*s;
	int			i;

	s = (std::string *)&contact;
	i = 3;
	while (i && !s->empty())
	{
		if (i == 3)
			std::cout << "        " << index + 1 << '|';
		print_string(s->length(), (char *)&(*s));
		s++;
		if (--i)
			std::cout << '|';
		else
			std::cout << '\n';
	}
}

void	display_all(Contact contact)
{
	VarNames	values;
	std::string	*s;
	std::string	*s2;
	int			i;

	s = (std::string *)&contact;
	s2 = (std::string *)&values;
	while (!s->empty())
	{
		std::cout << *s2;
		std::cout << *s << '\n';
		s++;
		s2++;
	}
}

class PhoneBook
{
	private:
		Contact contacts[8];
		int 	i;
		int		j;
	public:
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
		void print(void)
		{
			i = 0;
			while (i < 8)
			{
				display_contact(contacts[i], i);
				i++;
			}
			std::cout << " >> ";
			std::cin >> j;
			if (j > i + 1)
				std::cout << "Index is out of range or the contact doesn\'t exit use ADD to add a new one.\n";
			else
				display_all(contacts[j - 1]);
		}
};

int	main()
{
	PhoneBook	book;
	int			i;
	std::string	cmd;

	i = 0;
	while (1)
	{
		std::cout << '>';
		std::cin >> cmd;
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			book.set_contact(i);
		else if (cmd == "SEARCH")
			book.print();
		i += 1 * (i < 9) + -i * (i >=9);
	}
	
	book.set_contact(1);
	book.set_contact(2);
	book.print();
}