#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : contact_count(0) {}

void	PhoneBook::add_contact(const Contact& contact)
{
	if (contact_count >= MAX_CONTACTS)
		contact_count = 0;
	contacts[contact_count] = contact;
	contact_count++;
}

int	PhoneBook::get_contact_count() const
{
	return (contact_count);
}

const Contact&	PhoneBook::get_contact(int index) const
{
	return (contacts[index]);
}

void	PhoneBook::print_value(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 8) + ".";
	std::cout << std::setfill(' ') << std::setw(10) << str << "|";
}
