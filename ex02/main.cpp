#include <string>
#include <iostream>

int main() {
	// объявление
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	// вывести адреса
	//		1. адрес переменной - &string
	//		2. адрес в указателе - stringPTR (указатель уже содержит адрес, поэтому & не нужно)
	//		3. адрес ссылки - &stringREF (равен адресу оригинальной переменной)
	std::cout << "Адрес переменной string: " << &string << std::endl;
	std::cout << "Адрес в указателе stringPTR: " << stringPTR << std::endl;
	std::cout << "Адрес ссылки stringREF: " << &stringREF << std::endl;
	// вывести значения
	//		1. значение переменной - string
	//		2. значение по указателю - *stringPTR
	//		3. значение ссылки - stringREF
	std::cout << "Значение переменной string: " << string << std::endl;
	std::cout << "Значение по указателю *stringPTR: " << *stringPTR << std::endl;
	std::cout << "Значение ссылки stringREF: " << stringREF << std::endl;
}
