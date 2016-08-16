#include <iostream>
#include <string>

using namespace std;
int main()
{
	int x = 5;
	int* foo;
	foo = &x;
	cout << *foo << endl;
	cin.ignore(10, '\n');
	cin.get();
}