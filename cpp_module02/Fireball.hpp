#pragma once
#include "ASpell.hpp"

class Fireball : public ASpell {

	private:
	//  data;
	public:
		Fireball();
		~Fireball();
		ASpell* clone() const;
};