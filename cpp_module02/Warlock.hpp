#ifndef	WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"

using namespace std;

class Warlock
{
	private:
		/* data */
		string	name;
		string	title;
		map<string, ASpell*> SpellStor;
	public:
		Warlock(const string& _name, const string& _title);
		~Warlock();
		const string&	getName() const;
		const string&	getTitle() const;
		void			setTitle(const string& _title);
		void			introduce() const;
		void			learnSpell(ASpell* spell);
		void			forgetSpell(string spellName);
		void			launchSpell(const string spellName, ATarget const &target);
};


#endif