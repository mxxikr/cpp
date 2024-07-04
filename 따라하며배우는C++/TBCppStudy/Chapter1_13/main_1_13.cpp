#include <iostream>

namespace mySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}


namespace mySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;
using namespace mySpace1;
using namespace mySpace1::InnerSpace;

int main() {

	cout << mySpace1::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;
	cout << my_function() << endl;

	cout << mySpace2::doSomething(3, 4) << endl;

	return 0;
}