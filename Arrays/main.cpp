#include <iostream>

using namespace std;

void FillRand (int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand (double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void main() {
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print (arr, n);
	Sort (arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n, int minRand, int maxRand) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand) {
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}



	/*
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

*/


	/*

	for (int i = 0; i < SIZE; i++) {
		brr [i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << brr[i] << "\t";
	}
	cout << endl;
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (brr[j] < brr[i]) {
				int buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		cout << brr[i] << "\t";
	}
	cout << endl;
*/

