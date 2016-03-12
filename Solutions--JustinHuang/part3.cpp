#include <iostream>
#include <map>
#include <set>
#include <string>
#include <typeinfo>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::vector;
// Vector
string finish(string a)
{
	vector<string> v = { "Hello","my","friend"};
	v.push_back(a);

	for (string e : v)
		cout << e << " ";
	cout << endl;
	exit(0);


}

int main()
{
	string name;
	cout << "What is your first name?" << endl;
	cin >> name;
	cout << finish(name) << endl;
	return 0;
}
// Sets
int Fnum(int a, int b, int c)
{
	set<int> s = {};
	s.insert(a);
	s.insert(b);
	s.insert(c);
	cout << " Your favorite numbers are ";
	for (int e : s)
		cout << e << " ";
	cout << endl;
	exit(1);
}

int main()
{
	int num1,num2,num3;
	cout << "What are your 3 favorit numbers? " << endl;
	cin >> num1 >> num2 >> num3;
	cout << Fnum(num1, num2, num3) << endl;
	return 0;
}
