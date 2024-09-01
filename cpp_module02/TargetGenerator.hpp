#pragma once

#include "ATarget.hpp"
#include <map>

using namespace std;

class TargetGenerator
{
	private:
		/* data */
		TargetGenerator(const TargetGenerator& _obj);
		TargetGenerator& operator=(const TargetGenerator& _obj);
		map<string, ATarget*>	TargetGeneratorBOOK;
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &);
};
