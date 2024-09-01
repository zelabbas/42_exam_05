#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

using namespace std;

class ASpell
{
	protected:
		/* data */
		string	name;
		string	effects;
	public:
		ASpell(const string& _name, const string& _effects);
		// ASpell(const ASpell& _aspell);
		virtual	~ASpell();
		// ASpell& operator=(const ASpell& _aspell);
		const string	getName() const;
		const string	getEffects() const;
		// void			setName(const string& _name);
		// void			setEffects(const string& _effects);
		virtual ASpell*	clone() const = 0;
		void	launch(const ATarget& _atarget) const;
};


#endif