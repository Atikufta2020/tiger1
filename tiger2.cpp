#include <iostream>
using namespace std;

int main()
{
	float c;

	cout << "Enter Temprature in Celsius\n";
	cin >> c;
	
	float f = (9 * c) / 5;
	f += 32;

	cout << "Temprature in Fahrenheit:" << f;


}