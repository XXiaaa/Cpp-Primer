#include <string>

using namespace std;

class HasPtr {
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(const HasPtr &orig) :ps(new string(*orig.ps)), i(orig.i) {}
	HasPtr& operator=(const HasPtr &rhs)
	{
		auto newp = new string(*rhs.ps);
		delete ps;
		ps = newp;
		i = rhs.i;
		return *this;
	}

private:
	string *ps;
	int i;
};