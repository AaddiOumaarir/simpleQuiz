#include <iostream>
using namespace std;
/*
int main() {
    // very basic cifer and decifer programme
	char firstLetter;
	char secondLetter;
	char thirdLetter;
	char fourthLetter;
	char fifthLetter;
	cout << "Please enter 5 letters : " << endl;
	cin >> firstLetter >> secondLetter>> thirdLetter>> fourthLetter>> fifthLetter;
	cout << " " << endl;
	cout << "Your cifered word is :" << int(firstLetter) << " " << int(secondLetter) << " " << int(thirdLetter) << " " << int(fourthLetter) << " " << int(fifthLetter) << endl;

	int n1, n2, n3, n4, n5;
	cout << "Please enter 5 numbers : " << endl;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << " " << endl;
	cout << "Your decifered word is :" << char(n1)<< char(n2)<< char(n3)<< char(n4) << char(n5) << endl;
	
	system("pause>0");
}*/
/*
int main() {
    // code to indicate if a number is odd or even
	int number;
	cout << "please enter a whole number"<<endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << "even number";
	}
	else{
		cout << "number is odd";
	}
	system("pause>0");
}
*/

int main() {
	// a program that show the nature of a triangle
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << "the triangle is equilateral";
	}
	else {
		if (a != b && a != c && b != c) {
			cout << "scalene triangle";
		}
		else {
			cout << "isoceles triangle";
		}
	}
}
