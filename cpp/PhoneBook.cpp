#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): i(0), i2(5) {
	std::cout << "Default constructor is called\n";
}

PhoneBook::PhoneBook(int number, int number2): i(number), i2(number2) {
	std::cout << "Default constructor is called\n";
}

PhoneBook::PhoneBook(int number) {
	this->i = number;
	std::cout << "Default constructor is called\n";
}


int PhoneBook::getNumber1() {
	return i;
}

int PhoneBook::getNumber2() {
	return i2;
}

void PhoneBook::setNumber(int num) {
	i = num;
}

PhoneBook::~PhoneBook() {
	std::cout << "Default destructor is called\n";
}
