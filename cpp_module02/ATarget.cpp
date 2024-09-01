#include "ATarget.hpp"

ATarget::ATarget(const string& _type) {
	type = _type;
}

ATarget::ATarget(const ATarget&	_atarget) {
	if (this != &_atarget)
		*this = _atarget;
}

ATarget&	ATarget::operator=(const ATarget& _atarget) {
	if (this != &_atarget) {
		type = _atarget.type;
	}
	return (*this);
}

ATarget::~ATarget() {

}

const string ATarget::getType() const {
	return (type);
}

void	ATarget::getHitBySpell(const ASpell& _aspell) const {
	cout << type << " has been " << _aspell.getEffects() << "!\n";
}