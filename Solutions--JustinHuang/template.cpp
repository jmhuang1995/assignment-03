#include <iostream>
#include <string>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;


template <typename T>
T average(T a, T b)
{
	return (a + b)/2;
}



int main()
{
	double l, d;
	int e, r;
	cout << " What are the weight of the two lions at the zoo? (use to the 2nd decimal place):";
	cin >> l >> d;
	cout << " Average weight of two lions " << average(l,d) << endl;
	cout << " What are teh weight of the bowling balls you have? (use whole number):";
	cin >> e >> r;
	cout << " Average weight of two bowling balls " << average(e,r) << endl;

	return 0;
}
