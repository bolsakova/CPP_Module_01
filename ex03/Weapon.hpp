#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

// базовый класс оружия
class Weapon {
private:
	std::string type;	// приватный атрибут
public:
	Weapon(std::string type);	// конструктор для создания оружия с типом
	const std::string& getType();	// возвращает константную ссылку на type
	void setType(std::string newType);	// устанавливает новое значение
};

#endif
