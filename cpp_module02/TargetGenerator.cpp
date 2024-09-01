#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::TargetGenerator(const TargetGenerator& _obj) {
	if (this != &_obj)
		*this = _obj;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& _obj) {
	if (this != &_obj) 
		TargetGeneratorBOOK = _obj.TargetGeneratorBOOK;
	return (*this);
}

TargetGenerator::~TargetGenerator() {
	// for (map<string, ATarget*>::iterator it = TargetGeneratorBOOK.begin(); it != TargetGeneratorBOOK.end(); it++) {
	// 	delete it->second;
	// }
	// TargetGeneratorBOOK.clear();
}

void	TargetGenerator::learnTargetType(ATarget* _atarget) {

	if (_atarget) {
		TargetGeneratorBOOK[_atarget->getType()] = _atarget;
	}
}

void	TargetGenerator::forgetTargetType(string const & AtargetName) {
	map<string, ATarget*>::iterator it = TargetGeneratorBOOK.find(AtargetName);
	if (it != TargetGeneratorBOOK.end())
		TargetGeneratorBOOK.erase(it);
}

ATarget*	TargetGenerator::createTarget(string const & AtargetName) {
	ATarget *tmp;

	tmp = NULL;
	if (TargetGeneratorBOOK.find(AtargetName) != TargetGeneratorBOOK.end())
		tmp = TargetGeneratorBOOK[AtargetName];
	return (tmp);
}
