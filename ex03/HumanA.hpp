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
//		- ссылка не может быть NULL (всегда должна на что-то ссылаться)
//		- можно установить оружие позже через setWeapon()
class HumanA {

};

#endif
