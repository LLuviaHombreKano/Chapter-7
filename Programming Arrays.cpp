/******************************************************************************

Programmed by Isaiah Romero

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void totalgrades(double grade[], double sum, double avg);
int MAX = 50;
	int main() {
		double grade[] = { 0 };
		double sum = 0;
		double avg = 0;
		totalgrades(grade,sum,avg);
}

	void totalgrades(double grade[], double sum, double avg) {
		int count = 0;
		for (int i = 0; i < MAX; i++) {
			//Prompt the User to create an array
			cout << "Enter grades exit when a negative value is input " << endl;
			cin >> grade[i];
			
			//Count the number of Grades entered
			count++;

			//Calculate the sum and average
			sum += grade[i];
			avg = sum / count;

			//Break from the loop if negative number is entered
			if (grade[i] < 0) {
				break;
			}
		}
		
		//Output the results 
		cout << " The sum of all the grades is: " << sum << endl;
		cout << " The avg of all the grades is: " << avg << endl;
		for (int i = 0; i < count; i++) {
			if (grade[i] <= 100 && grade[i] >= 90) {
				cout << "A " << endl;
			}
			else if (grade[i] < 90 && grade[i] >= 80) {
				cout << "B " << endl;
			}
			else if (grade[i] < 80 && grade[i] >= 70) {
				cout << "C " << endl;
			}
			else if (grade[i] < 70 && grade[i] >= 60) {
				cout << "D " << endl;
			}
			else {
				cout << "F " << endl;
			}
			if (grade[i] < avg) {
				cout << "*" << grade[i] << "\n" << endl;
			}
			else {
				cout << grade[i] << "\n" << endl;
			}
		}
	}
