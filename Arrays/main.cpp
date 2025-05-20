#include <iostream>

using namespace std;

void FillRand (int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand (double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void Sum(int arr[], const int n);

void Avg(int arr[], const int n);

void MinValue(int arr[], const int n);

void MaxValue(int arr[], const int n);

void ShiftLeft(int arr[], const int n);

void ShiftRight(int arr[], const int n);




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

	Sum(arr, n);

	Avg(arr, n);

	MinValue(arr, n);

	MaxValue(arr, n);

	ShiftLeft(arr, n);

	ShiftRight(arr, n);


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

void Sum(int arr[], const int n) {
	int amount = 0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	cout << endl << endl << "Сумма элементов массива: " << amount << endl;
}

void Avg(int arr[], const int n) {
	double amount = 0.0;
	double average_amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	average_amount = amount / n;
	cout << endl << endl << "Среднее арифметическое элементов массива: " << average_amount << endl;
}

void MinValue(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}
	cout << endl << endl << "Минимальное значение в массиве: " << min << endl;
}

void MaxValue(int arr[], const int n) {
int max = arr[0];
for (int i = 0; i < n; i++) {
	if (max < arr[i]) max = arr[i];
}
cout << endl << endl << "Максимальное значение в массиве: " << max << endl;
}

void ShiftLeft(int arr[], const int n) {
	int m;
	cout << endl << "Введите количество элементов для сдвига влево:" << endl;
	cin >> m;
	for (int j = 0; j < m; j++) {
		int temp = arr[0];
		
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << "\t";
		}
		cout << endl << endl;
	}
}

void ShiftRight(int arr[], const int n) {
	int l;
	cout << endl << "Введите количество элементов для сдвига вправо:" << endl;
	cin >> l;
	for (int j = 0; j < l; j++) {
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << "\t";
		}
		cout << endl << endl;
	}
}


