#include <iostream>\
using namespace std;

int add_numbers(int x, int y)
{
	return x + y;
}



int main()
{
	int first;
	int second;

	cout << "Enter first number: " << endl;
	cin >> first;

	cout << "Enter second number: " << endl;
	cin >> second;

	cout << "The reult of calling and numbers is: " << add_numbeers(first, second) << endl;
}