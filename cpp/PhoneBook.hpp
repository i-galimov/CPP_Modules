
#include <iostream>

class PhoneBook
{
private:
	int i;
	int i2;

public: 
	PhoneBook();
	PhoneBook(int number);
	PhoneBook(int number, int number2);
	~PhoneBook();
	int getNumber1();
	int getNumber2();
	void setNumber(int num);


	void methodTheBest();

};

class MyPhoneBook : public PhoneBook
{

};
