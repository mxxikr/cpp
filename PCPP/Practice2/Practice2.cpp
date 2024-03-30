#include <iostream>

int* save = nullptr;

void Func0()
{
	*save = 2000;
}

void Func1(int _int)
{
	_int = 1000;
}

void Func2(int* _int)
{
	*_int = 3000;
}

void Func3(int& _int)
{
	_int = 4000;
}

int main()
{
	int start = 100;

	save = &start;

	printf("%i \n", start);

	Func0();

	printf("%i \n", start);

	Func1(start);

	printf("%i \n", start);

	Func2(&start);

	printf("%i \n", start);

	Func3(start);

	printf("%i \n", start);
}
