/******************************************************************************

Programmed by Isaiah Romero

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int convertdays(int year, int month, int day);

//int main() {
	int year = 0, month = 0, day = 0, date = 0;
	
	cout << "The date is " << convertdays(year, month, day);
}

int convertdays(int year, int month, int day) {
	int date;
	cout << "Enter a month: " << endl;
	cin >> month;

	cout << "Enter a day: " << endl;
	cin >> day;

	cout << "Enter a year: " << endl;
	cin >> year;

	date = year * 10000 + month * 100 + day;
	return date;
}