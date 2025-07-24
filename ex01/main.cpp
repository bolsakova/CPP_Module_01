#include "Zombie.hpp"

int main() {
	int N = 5;
	// создать орду зомби с помощью zombieHorde()
	Zombie *horde = zombieHorde(N, "Test");
	// заставить каждого зомби объявиться - announce()
	for (int i = 0; i < N; i++)
		horde[i].announce();
	// правильно удалить массив с помощью delete[]
	delete[] horde;
	return 0;
}
