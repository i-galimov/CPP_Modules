#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		void set_first_name(std::string data);
		void set_last_name(std::string data);
		void set_nickname(std::string data);
		void set_phone_number(std::string data);
		void set_darkest_secret(std::string data);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		Contact(void);
		~Contact(void);
};

#endif