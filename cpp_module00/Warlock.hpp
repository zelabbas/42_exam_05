#ifndef	WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

using namespace std;
/*
Since they're private, you will write the following getters :
* getName, returns a reference to constant string
* getTitle, returns a reference to constant string
*/

class Warlock
{
	private:
		/* data */
		string	name;
		string	title;
	public:
		Warlock(const string& _name, const string& _title);
		~Warlock();
		const string&	getName() const;
		const string&	getTitle() const;
		void			setTitle(const string& _title);
		void			introduce() const;
};


#endif