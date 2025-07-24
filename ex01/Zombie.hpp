#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	std::string name; // приватный атрибут

public:
	void announce( void );				// метод для объявления зомби
	void setName(std::string name);		// метод для установки имени
	Zombie();							// конструктор - для создания массива со всеми зомби
	Zombie(std::string name );			// конструктор - создание отдельного зомби с именем
	~Zombie(void);						// деструктор - для вывода отладочного сообщения
}; 

Zombie* zombieHorde( int N, std::string name );

#endif
