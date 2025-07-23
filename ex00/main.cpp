#include "Zombie.hpp"

int main() {
	// Тест newZombie - HEAP
	Zombie* heapZombie = newZombie("HeapZombie");
	// Тест randomchump - STACK
	randomChump("StackZombie");
	// удаление HEAP зомби
	delete heapZombie;
	return 0;
}
