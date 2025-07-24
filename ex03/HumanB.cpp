#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){
	// инициализируем имя и weapon как nullptr (без оружия)
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon; // сохраняем адрес переданного оружия
}

void HumanB::attack() {
	if (weapon != nullptr) {
		// есть оружие - атакуем
		// weapon->getType() - доступ к методу через указатель
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
	else {
		// нет оружия - что делать?
		std::cout << name << " has no weapon to attack with!" << std::endl;
	}
}
