#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double num1, num2, num3;
	double sum;
	double average;

  cin >> num1 >> num2 >> num3;
  sum = num1 + num2 + num3;
  average = sum / 3;

	// Output
	// Sum and Average
	cout << fixed << setprecision(2) << sum << " "<< average;
	
}