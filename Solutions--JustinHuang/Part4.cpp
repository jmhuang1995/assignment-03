
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
// Euclid's algorithm 
int gcd(int a, int b)
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
		return gcd(a - b, b);
  // Recursive
	return gcd(a, b - a);
}

int main()
{
	cout << gcd(-50, 10) << endl;
	return 0;
}

// Fibonacci number
int fib(int n)
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
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	for (int i = 0; i <= 15; i++)
	{
		try {
			cout << fib(i) << endl;
		}
		catch(int n)
		{
			cout << n << " is an invalid number ";
		}
	}
	return 0;
}

// Pow
int pow(int a, int e)
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
	return a * pow(a, e - 1);
}

int main()
{
	try {
		cout << pow(2, -5) << endl;
	}
	catch (int e)
	{
		cout << e << " is an invalid number ";
	}
	return 0;
}

 Tri
int tri(int n)
{
	// Error
	if (n < 0)
		throw n;
	// Base
	if (n == 0)
		return 0;
	// Recursive
	return n + tri(n - 1);

}
int main()
{
	
	
	for (int i = 0; i <= 3; i++)
	{
		try
		{
			cout << tri(i) << endl;
		}
		catch (int n)
		{
			cout << n << " is an invalid number";
		}
	}
	
	return 0;
}
