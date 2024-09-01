#include "ASpell.hpp"

ASpell::ASpell(const string& _name, const string& _effects) {
	name = _name;
	effects = _effects;
}

ASpell::ASpell(const ASpell& _aspell) {
	if (this != & _aspell)
		*this = _aspell;
}

ASpell::~ASpell() {

}

ASpell& ASpell::operator=(const ASpell& _aspell) {
	if (this != &_aspell) {
		name = _aspell.name;
		effects = _aspell.effects;
	}
	return (*this);
}

const string	ASpell::getName() const {
	return (name);
}

const string	ASpell::getEffects() const {
	return (effects);
}

void	ASpell::launch(const ATarget& _atarget) const {
	_atarget.getHitBySpell(*this);
}