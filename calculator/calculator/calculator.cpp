#include <iostream>
using namespace std;

int main()
{
	char again;
	int operationChoice;
	cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division" << endl;
	cin >> operationChoice;

	double x, y;
	cout << "Enter the first number: " << endl;
	cin >> x;
	cout << "Enter the second number: " << endl;
	cin >> y;

	double result;
	if (operationChoice == 1)
		result = x + y;
	if (operationChoice == 2)
		result = x - y;
	if (operationChoice == 3)
		result = x * y;
	if (operationChoice == 4)
		result = x / y;

	cout << result;

	if ((int)result % 2 == 0)
		cout << "The result is even." << endl;
	else
		cout << "The result is odd." << endl;
	cout << "\nRun again? \"y\" or \"n\"" << endl;
	cin >> again;


	while (again != 'y' && again != 'n'){
		cout << "Invalid input. Run again? y or n" << endl;
		cin >> again;
	}

	cout << endl;

	while (again != 'n');

	return 0;
}
