#include "Zombie.hpp"

// HEAP allocation
//		ТипОбъекта* указатель = new ТипОбъекта(параметры_конструктора);
//		new - создание объекта на heap
Zombie* newZombie( std::string name ) {
	// создать зомби с new
	// вернуть указатель на созданного зомби - чтобы использовать зомби вне функции
	// зомби будет жить после завершения функции
	Zombie* zombie = new Zombie(name);
	return zombie;
	// или в одну строку:
	//		return new Zombie(name);
}
