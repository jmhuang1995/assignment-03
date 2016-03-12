/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Justin Huang <jmhuang1995@gmail.com>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
// A prgram to find the average grade for a student using exceptions
#include <iostream>
#include <exception>

//Prototype 
void GradeCalc(int g);

int main()
{
	int grade;
	char ans;
	do {
		std::cout << " Please enter your grade percentage:\n";
		std::cin >> grade;
		try
		{
			GradeCalc(grade);
		}
		catch (int h)
		{
			std::cout << h << " is an invalid input!\n";
		}
			std::cout << " Would you like to run it again?(Y/N):";
			std::cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
}
void GradeCalc(int g)
{
	if (g > 100)
	{
		throw g;
	}
	if (g >= 90 && g <= 100)
	{
		std::cout << " You got an A! \n";
	}
	if (g >= 80 && g < 90)
	{
		std::cout << " You got a B! \n";
	}
	if (g >= 70 && g < 80)
	{
		std::cout << " You got a C! \n";
	}
	if (g >= 60 && g < 70)
	{
		std::cout << " You got a D! \n";
	}
	if (g >= 0 && g < 60)
	{
		std::cout << " You failed try harder! \n";
	}
	if (g < 0)
	{
		throw g;
	}
}
