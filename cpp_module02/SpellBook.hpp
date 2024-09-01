#pragma once

#include "ASpell.hpp"
#include <map>
using namespace std;


class SpellBook
{
	private:
		/* data */
		SpellBook(const SpellBook& _spellbook);
		SpellBook& operator=(const SpellBook& _spellbook);
		map<string, ASpell*> _SpellBook;
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);
};
