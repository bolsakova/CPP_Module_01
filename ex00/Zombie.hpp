#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	std::string name; // приватный атрибут

public:
	void announce( void );		// метод для объявления зомби
	Zombie(std::string name );	// конструктор - создание зомби
	~Zombie(void);				// деструктор - для вывода отладочного сообщения
};

// создает зомби - heap allocation
//
//		- создает зомби с new
//		- возвращает указатель
//		- зомби живет после завершения функции
//		- нужно вручную удалить с delete
Zombie* newZombie( std::string name );

// создает зомби - stack allocation, заставляет объявиться
//
//		- создает зомби как локальную переменную
//		- зомби объявляется и сразу "умирает" при выходе из функции
//		- автоматически вызывается деструктор
void randomChump( std::string name );

#endif
