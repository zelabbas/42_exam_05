#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget {
	
	private:
		/*data*/
	public:
		BrickWall();
		~BrickWall();
		ATarget* clone() const;
};