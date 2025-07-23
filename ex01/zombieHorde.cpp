#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	// создать массив из N зомби одним вызовом new
	Zombie* zombieArray = new zombie[N];
	// инициализировать каждого зомби именем
	// вернуть указатель на ПЕРВОГО зомби в массиве
	for (int i = 0; i < N; i++) {
		zombieArray[i] = Zombie(name);
	}
	return zombieArray;
}
