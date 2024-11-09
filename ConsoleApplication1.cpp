#include <iostream>
using namespace std;
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

}