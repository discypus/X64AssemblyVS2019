#include <iostream>
#include <vector>
#include <cstdint>
#include <cstdlib>

using std::cout;
using std::endl;

int64_t add_int64(int64_t a, int64_t b)
{
	return a + b;
}

void call_add_int64()
{
	int64_t a = 1;
	int64_t b = 2;
	int64_t c = add_int64(a, b);
//	cout << "add_int64(): c=" << c << endl;
}

double add_double(double a, double b)
{
	return a + b;
}

void call_add_double()
{
	double a = 1;
	double b = 2;
	double c = add_double(a, b);
//	cout << "add_double(): c=" << c << endl;
}

int main()
{
	call_add_int64();
	call_add_double();

	return 0;
}
