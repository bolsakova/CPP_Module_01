#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

// класс имеет имя и оружие
// метод attack() выводит: <name> attacks with their <weapon type>
// !!! получает оружие в конструкторе, ВСЕГДА вооружен
//		=> нужна ссылка
// ПОЧЕМУ?
//		- ссылка всегда валидна (не может быть NULL)
//		- инициализруется в конструкторе и никогда не меняется
//		- гарантия того. что оружие есть всегда
class HumanA {
private:
	std::string name;
	Weapon& weapon; // ссылка
public:
	HumanA(std::string name, Weapon& weapon);	// с оружием в конструкторе
	void attack();	// НЕ нужна проверка на nullptr
};

#endif
