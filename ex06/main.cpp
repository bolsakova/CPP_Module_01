#include "Harl.hpp"

// создать массив указателей на методы и массив строк уровней,
// затем найти соответствие
int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	
	Harl harl;
	harl.filter(av[1]);

	return 0;
}
