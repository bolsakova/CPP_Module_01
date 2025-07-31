#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
	// массив указателей на методы
	void (Harl::*methods[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	// массив соответствующих уровней
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	// поиск соответствия и вызов нужного метода
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {	// нашли соответствие
			// вызов метода через указатель с тем же индексом
			(this->*methods[i])();
			return;
		}
	}
	// если уровень не найден
	std::cout << "Unknown level: " << level << std::endl;
}
