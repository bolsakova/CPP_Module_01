#include "Zombie.hpp"

// STACK allocation
void randomChump( std::string name ) {
	// создать зомби
	// заставить его объявиться (вызвать announce())
	// ничего не возвращать (зомби автоматически удалиться)
	Zombie zombie(name);	// создание на stack
	zombie.announce();		// объявление
	// деструктор вызовется автоматически при выходе из функции
}
