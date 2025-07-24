#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
	std::string type;	// приватный атрибут
public:
	std::string& getType();	// возвращает константную ссылку на type
	std::string setType(std::string newType);	// устанавливает новое значение
};

#endif
