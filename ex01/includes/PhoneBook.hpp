#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <limits>

# define RESET		"\033[0m"
# define CLEAR		"\033[2J\033[1;1H"
# define PINK		"\033[38;2;255;182;193m"
# define BLUE		"\033[38;5;111m"
# define GREEN		"\033[38;5;120m"
# define YELLOW		"\033[38;5;227m"
# define ORANGE		"\033[38;5;208m"
# define HOT_PINK	"\033[38;5;198m"

class PhoneBook
{
	private:
		static const int MAX_CONTACTS = 8;
		Contact contacts[MAX_CONTACTS];
		int	contact_count;

	public:
		PhoneBook();

	void		add_contact(const Contact& contact);
	int		get_contact_count() const;
	const Contact&	get_contact(int index) const;
	void		print_value(std::string str);
};

#endif
