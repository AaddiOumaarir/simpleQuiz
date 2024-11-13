//#include <iostream>
//using namespace std;
// a program that adds two numbers 
/*int main() {
	float number1, number2;
	cout << "enter the first number "<<endl;
	cin >> number1;
	cout << " enter the second number "<<endl;
	cin >> number2;
	float result = number1 + number2;
	cout << "the result of addition of " << number1 << " and " << number2 << " is " << result;
	system("pause>0");
}*/ 
/*
int main() {
	int a = 19;
	int b = 34;
	int tem = b;
	b = a;
	a = tem;
	cout <<"a = "<< a << " " <<" b = "<< b;

	system("pause>0");
}*/
/*
void main() {
	float weight, height;
	cout << " Enter your weight in Kg and your height in m ";
	cin >> weight >> height;
	float bmi = weight / (height * height);
	if (bmi < 18.5)
		cout << "You are underweight";


	else if (bmi > 25)
		cout << " you are overweight";

	else
		cout << "you are normal weight";
	cout << "Your bmi is " << bmi;
	
	system("pause>0");
}
*/
/*
#include <iostream>
using namespace std;

void main() {
	int host;
	int guess;
	cout << "Please enter your number: ";
	cin >> host;
	system("cls");
	cout << "Enter your guess please: ";
	cin >> guess;
	//if (guess == host)
		//cout << "GREAT you guessed right";

	//else if (guess < host)
		//cout << "oooff !!! your number is  smaller than necessary";
	//else
		//cout << "Oh no, your number is greater the necessary";

    
	(guess == host) ? cout << "correct" : cout << "Failed";

	system("pause>0");
}*/
/*
#include <iostream>
using namespace std;
int main() {
	int firstNumber, secondNumber;
	char operation;
	cout << "Enter the first number : ";
	cin >> firstNumber;
	cout << "Enter the second number : ";
	cin >> secondNumber;
	cout << "Enter the operation the you desire (+, x, /, -, %)";
	cin >> operation;

	if (operation == '+')
		cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;

	else if (operation == '-')
		cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;

	else if (operation == 'x')
		cout << firstNumber << " x " << secondNumber << " = " << firstNumber + secondNumber;

	else if (operation == '/')
		cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;

	else if (operation == '%')
		cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber;
	else
		cout << "operation non valide";

}*/

#include <iostream>
using namespace std;
/*
int main() {
	float num1, num2;
	char operation;
	

	cout << "ADDI'S CALCULATOR" << endl;
	cin >> num1 >> operation >> num2;
	float isNum1Int = int(num1) == num1, isNum2Int = int(num2) == num2;
	switch (operation) {

	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;

	case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;

	case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;

	case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
    
	case '%':
		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
		else
			cout << "sorry one or both numbers are not integers"; 
		break;

	default:
		cout << "Fuck you hacker ";


	}

	system("pause>0");
}*/
/*
int main() {
	int year, month;
	cout << " please enter a year and a month: ";
	cin >> year >> month;

	switch (month) {
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400) // leap year condition
			cout << " 29 days" << endl;
		else
			cout << " 28 days ";
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << " 31 days"; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << " 30 days"; break;

	default: cout << "Not valid year or month";

	}

}*/
/*
int main() {
	long long int number;
	cout << "please enter a number : ";
	cin >> number;
	if (number == 0) {
		cout << " you have entered 0";
	}
	else {
		if (number < 0) {
			number = -1 * number;
		}
		int counter = 0;
		while (number > 0) {
			number = number / 10;
			++counter;
		}
		cout << "The number of digits is : " << counter;
	}
}*/
/*
int main() {
	int number;
	int reversedNumber = 0;
	cout << "Enter a number to reverse: ";
	cin >> number;
	while (number > 0){
		reversedNumber *= 10;
		int rest = number % 10;
		reversedNumber += rest;
		number /= 10;
		

	}
	cout << reversedNumber;
	system("pause>0");

}*/
/*
int main() {
	int pin, userPin = 1234, errorCounter = 0, leftTries = 3;
	cout << "Pin: ";
	do {
		cin >> pin;
		if (pin != userPin) {
			errorCounter++;
			if (errorCounter < 3){
				cout << "Wrong pin. You have " << --leftTries << " tries left.  Please try again: ";

			}
			
		}
	} while (errorCounter<3 && pin != userPin);
	if (errorCounter < 3) {
		cout << "App is loading...";
	}
	else {
		cout << "Blocked!!!";
	}
	system("pause>0");

}*/
/*
int main() {
	int factoriel = 1, number;
	cout << "Number: ";
	cin >> number;
	for (int i = 1; i <= number; i++){
		factoriel *= i;
	}
	cout << "the factorial of 12 is: " << factoriel;
}*/
/*
int main() {
	float grade, averageGrade = 0;
	
	for (int i = 0; i < 3; i++) {
		do {
			cout << "enter grade"<<i+1<<": ";
			cin >> grade;
			
		} while ((grade < 1 or grade > 5));
		averageGrade += grade;
	}
	cout << "The average grade is : "<< averageGrade / 3;
	system("pause>0");
}*/

int main() {
	cout << "**MULTIPLICATION TABLE**" << endl;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << "x" << j << " = " << i * j << endl;
		}
		cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << endl;
	}
	system("pause>0");
}






