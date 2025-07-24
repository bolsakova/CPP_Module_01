#include <string>
#include <iostream>

int main() {
	// объявление
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	// вывести адреса
	//		1. адрес переменной - &string
	//		2. адрес в указателе - stringPTR
	//		3. адрес ссылки - &stringREF
	
	// вывести значения
	//		1. значение переменной - string
	//		2. значение по указателю - *stringPTR
	//		3. значение ссылки - &stringREF
}
