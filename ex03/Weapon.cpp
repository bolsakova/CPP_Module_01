#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

// возвращаем ссылку, чтобы избежать копирования
const std::string& Weapon::getType() {
	return type;
}

void Weapon::setType(std::string newType) {
	this->type = newType; // в данном случае можно просто type, вместо this->type
}
