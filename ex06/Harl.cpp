#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filter( std::string level ) {
	// функция для получения индекса уровня
	int getLevel = -1;
	if (level == "DEBUG") getLevel = 0;
	else if (level == "INFO") getLevel = 1;
	else if (level == "WARNING") getLevel = 2;
	else if (level == "ERROR") getLevel = 3;
	// switch c fall through
	switch (getLevel)
	{
	case 0:
		debug();
		std::cout << std::endl;
		// fall through - БЕЗ break!
	case 1:
		info();
		std::cout << std::endl;
		// fall through - БЕЗ break!
	case 2:
		warning();
		std::cout << std::endl;
		// fall through - БЕЗ break!
	case 3:
		error();
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
