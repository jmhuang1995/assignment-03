/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Justin Huang <Jmhuang1995@gmail.com>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
using _iter for group 4 programs
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
// Euclid's algorithm 
int gcd_iter(int a, int b)
{
  // Normalize
	if (b < 0)
		b = abs(b);
	if (a < 0)
	a = abs(a);
  // Base
	if (b == 0)
		return abs(a);
	if (a == 0)
		return abs(b);
	if (a > b)
		return gcd_iter(a - b, b);
  // Recursive
	return gcd_iter(a, b - a);
}

int main()
{
	cout << gcd_iter(-50, 10) << endl;
	return 0;
}

// Fibonacci number
int fib_inter(int n)
{
	// Error
	if (n < 1)
		throw n;
	// Base
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	// Recursive
	return fib_inter(n - 1) + fib_inter(n - 2);
}

int main()
{
	for (int i = 0; i <= 15; i++)
	{
		try {
			cout << fib_inter(i) << endl;
		}
		catch(int n)
		{
			cout << n << " is an invalid number ";
		}
	}
	return 0;
}

// Pow
int pow_inter(int a, int e)
{
	// Error
	if (e < 0)
		throw e;
	// Base
	if (e == 0)
		return 1;
	if (e == 1)
		return a;
	// Recursive
	return a * pow_inter(a, e - 1);
}

int main()
{
	try {
		cout << pow_inter(2, -5) << endl;
	}
	catch (int e)
	{
		cout << e << " is an invalid number ";
	}
	return 0;
}

// Tri
int tri_inter(int n)
{
	// Error
	if (n < 0)
		throw n;
	// Base
	if (n == 0)
		return 0;
	// Recursive
	return n + tri_inter(n - 1);

}
int main()
{
	
	
	for (int i = 0; i <= 3; i++)
	{
		try
		{
			cout << tri_inter(i) << endl;
		}
		catch (int n)
		{
			cout << n << " is an invalid number";
		}
	}
	
	return 0;
}
