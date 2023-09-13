// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float C;

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;


	cout << "\nYour Selection: ";
	cin >> choice;
}

void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	// The rest of this function is an exercise to the reader
}

void firstChoice(float A, float B) {
	cout << "This is proving the first choice ran" << endl;
}

void secondChoice(float A, float B) {
	cout << "This is proving the second choice ran" << endl;
}

void Addition(float A, float B) {	
	C = A + B;
	cout << A << " + " << B << " = " << C << endl;
}

void Subtraction(float A, float B) {
	C = A - B;
	cout << A << " - " << B << " = " << C << endl;
}

void Multiplication(float A, float B) {
	C = A * B;
	cout << A << " * " << B << " = " << C << endl;
}

void Division(float A, float B) {
	C = A / B;
	cout << A << " / " << B << " = " << C << endl;
}

void Invalid(string invalidAnswer) {
	invalidAnswer = "\nInvalid selection input. Restart program and try again.";
	cout << invalidAnswer << endl;
}

int main() {
	int choice;
	float A;
	float B;
	string invalidAnswer;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		Addition(A,B);
	}

		else if (choice == 2) {
			Subtraction(A,B);
		}

		else if (choice == 3) {
			Multiplication(A, B);
		}

		else if (choice == 4) {
			Division(A, B);
		}

		else {
			Invalid(invalidAnswer);
		}

	return 0;
}
