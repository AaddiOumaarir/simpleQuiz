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

void main() {
	float weight, height;
	cout << " Enter your weight in Kg and your height in m ";
	cin >> weight >> height;
	float bmi = weight / (height * height);
	if (bmi < 18.5) {
		cout << "You are underweight";
	}
	else {
		if (bmi > 25) {
			cout << "You are overweight";
		}
		else {
			cout << "You are normal weight";
		}
	}
	system("pause>0");
}