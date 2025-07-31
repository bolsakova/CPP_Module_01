#include "Harl.hpp"

// создать массив указателей на методы и массив строк уровней,
// затем найти соответствие
int main() {
	Harl harl;

	std::cout << "=== Testing Harl complaints ===" << std::endl;

	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	// тест неизвестного уровня
	harl.complain("UNKNOWN");

	return 0;
}
