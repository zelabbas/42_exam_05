#include "Warlock.hpp"

Warlock::Warlock(const string& _name, const string& _title){
	name = _name;
	title = _title;
	cout << name <<": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	cout << name <<": My job here is done!\n";
	for (map<std::string, ASpell*>::iterator it = SpellStor.begin(); it != SpellStor.end(); ++it) {
		delete it->second;
	}
	SpellStor.clear();
}

const string&	Warlock::getName() const {
	return (name);
}

const string&	Warlock::getTitle() const {
	return (title);
}

void	Warlock::setTitle(const string& _title) {
	title = _title;
}

void	Warlock::introduce() const {
	cout << name << ": I am "<< name <<", "<< title <<"!\n";
}

void	Warlock::learnSpell(ASpell* spell) {
	if (spell) {
		if (SpellStor.find(spell->getName()) == SpellStor.end())
			SpellStor[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(string spellName) {
	if (SpellStor.find(spellName) != SpellStor.end())
		SpellStor.erase(SpellStor.find(spellName));
}

void	Warlock::launchSpell(const string spellName, ATarget const &target) {
	if (SpellStor.find(spellName) != SpellStor.end())
		SpellStor[spellName]->launch(target);
}


