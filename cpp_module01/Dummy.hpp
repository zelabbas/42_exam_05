#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget {
	
	private:
		/*data*/
	public:
		Dummy();
		~Dummy();
		ATarget* clone() const;
};