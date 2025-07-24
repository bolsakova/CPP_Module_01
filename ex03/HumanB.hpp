#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

// класс имеет имя и оружие
// метод attack() выводит: <name> attacks with their <weapon type>
// !!! НЕ получает оружие в конструкторе, может быть БЕЗ оружия
//		=> нужен указатель
// ПОЧЕМУ?
//		- указатель может быть nullptr (нет оружия)
//		- ссылка не может быть NULL (всегда должна на что-то ссылаться)
//		- можно установить оружие позже через setWeapon()
class HumanB {
private:
	std::string name;
	Weapon* weapon; // указатель
public:
	HumanB(std::string name);		// БЕЗ оружия в конструкторе
	void setWeapon(Weapon& weapon);	// устанавливаем оружие позже
	void attack();					// проверяем есть ли оружие
};

#endif
