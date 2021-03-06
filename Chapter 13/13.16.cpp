#include <iostream>

using namespace std;

class numbered {
	friend void f(const numbered&);

public:
	static int val;
	numbered() :mysn(val) { ++val; };
	numbered(const numbered &s) :mysn(val) { ++val; }

private:
	int mysn;
};

int numbered::val = 1;

void f(const numbered &s)
{
	cout << s.mysn << endl;
}

int main()
{
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
}