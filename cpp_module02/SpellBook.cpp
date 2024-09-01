#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::SpellBook(const SpellBook& _spellbook) {
	if (this != &_spellbook)
		*this = _spellbook;
}

SpellBook& SpellBook::operator=(const SpellBook& _spellbook) {
	if (this != &_spellbook) {
		_SpellBook = _spellbook._SpellBook;
	}
	return (*this);
}

SpellBook::~SpellBook() {
	for (map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it) {
		delete it->second;
	}
	_SpellBook.clear();
}

void	SpellBook::learnSpell(ASpell* _aspell) {

	if (_aspell) {
		_SpellBook[_aspell->getName()] = _aspell->clone();
	}
}

void	SpellBook::forgetSpell(string const & SpellName) {
	map<string, ASpell*>::iterator it = _SpellBook.find(SpellName);
	if (it != _SpellBook.end()) {
		delete it->second;
		_SpellBook.erase(it);
	}
}

ASpell*	SpellBook::createSpell(string const & SpellName) {
	ASpell *tmp;

	tmp = NULL;
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		tmp = _SpellBook[SpellName];
	return (tmp);
}



