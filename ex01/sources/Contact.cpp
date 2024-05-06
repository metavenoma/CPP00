#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""),
	phone_number(""), darkest_secret("") {}

Contact::Contact(const std::string& fn, const std::string& ln, const std::string& nn,
		const std::string& pn, const std::string& ds)
	: first_name(fn), last_name(ln), nickname(nn), phone_number(pn), darkest_secret(ds) {}

std::string	Contact::get_first_name() const
{
	return (first_name);
}

std::string	Contact::get_last_name() const
{
	return (last_name);
}

std::string	Contact::get_nickname() const
{
	return (nickname);
}

std::string	Contact::get_phone_number() const
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (darkest_secret);
}
