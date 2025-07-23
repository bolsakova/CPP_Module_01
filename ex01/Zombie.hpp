#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	// int N;
	std::string name; // приватный атрибут

public:
	void announce( void );		// метод для объявления зомби
	Zombie(std::string name );	// конструктор - создание зомби
	~Zombie(void);				// деструктор - для вывода отладочного сообщения
}; 

Zombie* zombieHorde( int N, std::string name );

#endif
