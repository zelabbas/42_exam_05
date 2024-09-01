#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	private:
		/* data */
	public:
		Polymorph();
		~Polymorph();
		ASpell* clone() const;
};