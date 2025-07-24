#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	// создать массив из N зомби одним вызовом new
	// каждый получает имя "Unknown" (конструктор по умолчанию)
	Zombie* zombieArray = new Zombie[N];
	// инициализировать каждого зомби именем
	// в цикле каждому зомби дается нужное имя через setName()
	for (int i = 0; i < N; i++) {
		zombieArray[i].setName(name);
	}
	// вернуть указатель на ПЕРВОГО зомби в массиве
	return zombieArray;
}
