#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
using namespace std;

class ASpell;

class ATarget
{
	protected:
		/* data */
		string	type;
	public:
		ATarget(const string& _type);
		ATarget(const ATarget&	_atarget);
		ATarget&	operator=(const ATarget& _atarget);
		virtual	~ATarget();
		const string getType() const;
		virtual	ATarget* clone() const = 0;
		void	getHitBySpell(const ASpell& _aspell) const;
};

#endif
