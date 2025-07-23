#include "Zombie.hpp"

// initialization list:
//		- атрибут сразу создается с нужным значением
//		- тело конструктора остается пустым
// синтаксис:
//		Конструктор(параметры) : атрибут1(значение1), атрибут2(значение2) {}
Zombie::Zombie(std::string name ) : name(name) {
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
