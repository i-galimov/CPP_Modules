#include "PhoneBook.hpp"

int main() 
{
    PhoneBook *book = new PhoneBook();
    PhoneBook book2(2022);
    PhoneBook book3(16, 6);

    std::cout << book->getNumber1() << std::endl;
    std::cout << book2.getNumber1() << std::endl;
    std::cout << book3.getNumber1() << std::endl;
    book->setNumber(158);
    std::cout << book->getNumber1() << std::endl;
    delete book;
    return 0;
}