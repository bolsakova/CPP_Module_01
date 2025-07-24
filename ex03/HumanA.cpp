#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	// ссылку ОБЯЗАТЕЛЬНО инициализировать в initialization list!
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	// НЕТ проверки на nullptr - ссылка всегда валидна!
}
