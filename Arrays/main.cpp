#include <iostream>

using namespace std;

void FillRand (int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand (double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand (float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand (char arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

void Sum(int arr[], const int n);
void Sum(double arr[], const int n);
void Sum(float arr[], const int n);
void Sum(char arr[], const int n);

void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(float arr[], const int n);
void Avg(char arr[], const int n);

void MinValue(int arr[], const int n);
void MinValue(double arr[], const int n);
void MinValue(float arr[], const int n);
void MinValue(char arr[], const int n);

void MaxValue(int arr[], const int n);
void MaxValue(double arr[], const int n);
void MaxValue(float arr[], const int n);
void MaxValue(char arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftLeft(float arr[], const int n);
void ShiftLeft(char arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftRight(float arr[], const int n);
void ShiftRight(char arr[], const int n);

void PrintIndex(char arr[], const int n);


void main() {
	setlocale(LC_ALL, "");

	const int n = 5;
	
	int arr[n];
	FillRand(arr, n);
	Print (arr, n);
	Sort (arr, n);
	Print(arr, n);

	Sum(arr, n);
	Avg(arr, n);
	MinValue(arr, n);
	MaxValue(arr, n);
	ShiftLeft(arr, n);
	ShiftRight(arr, n);
	
	char crr[n];
	FillRand(crr, n);
	Print(crr, n);
	PrintIndex(crr, n);
	Sort(crr, n);
	Print(crr, n);
	PrintIndex(crr, n);

	Sum(crr, n);
	Avg(crr, n);
	MinValue(crr, n);
	MaxValue(crr, n);
	ShiftLeft(crr, n);
	ShiftRight(crr, n);

	const int SIZE = 8;
	
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	Sum(brr, SIZE);
	Avg(brr, SIZE);
	MinValue(brr, SIZE);
	MaxValue(brr, SIZE);
	ShiftLeft(brr, SIZE);
	ShiftRight(brr, SIZE);

	float frr[SIZE];
	FillRand(frr, SIZE);
	Print(frr, SIZE);
	Sort(frr, SIZE);
	Print(frr, SIZE);

	Sum(frr, SIZE);
	Avg(frr, SIZE);
	MinValue(frr, SIZE);
	MaxValue(frr, SIZE);
	ShiftLeft(frr, SIZE);
	ShiftRight(frr, SIZE);

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

void FillRand(float arr[], const int n, int minRand, int maxRand) {
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand) {

	for (int i = 0; i < n; i++) {
		arr[i] = char (rand() % (maxRand - minRand) + minRand);
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

void Print(float arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n) {
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

void Sort(float arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (int(arr[j]) < int(arr[i])) {
				char buffer = arr[i];
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

void Sum(double arr[], const int n) {
	double amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	cout << endl << endl << "Сумма элементов массива: " << amount << endl;
}

void Sum(float arr[], const int n) {
	float amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	cout << endl << endl << "Сумма элементов массива: " << amount << endl;
}

void Sum(char arr[], const int n) {

	int amount = 0;
	for (int i = 0; i < n; i++) {
		amount += int(arr[i]);
	}
	cout << endl << endl << "Сумма элементов массива: " << char(amount) << endl;
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

void Avg(double arr[], const int n) {
	double amount = 0.0;
	double average_amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	average_amount = amount / n;
	cout << endl << endl << "Среднее арифметическое элементов массива: " << average_amount << endl;
}

void Avg(float arr[], const int n) {
	float amount = 0.0;
	float average_amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
	}
	average_amount = amount / n;
	cout << endl << endl << "Среднее арифметическое элементов массива: " << average_amount << endl;
}

void Avg(char arr[], const int n) {
	int amount = 0;
	int average_amount = 0;
	for (int i = 0; i < n; i++) {
		amount += int(arr[i]);
	}
	average_amount = amount / n;
	cout << endl << endl << "Среднее арифметическое элементов массива: " << char (average_amount) << endl;
}

void MinValue(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}
	cout << endl << endl << "Минимальное значение в массиве: " << min << endl;
}

void MinValue(double arr[], const int n) {
	double min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}
	cout << endl << endl << "Минимальное значение в массиве: " << min << endl;
}

void MinValue(float arr[], const int n) {
	float min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}
	cout << endl << endl << "Минимальное значение в массиве: " << min << endl;
}

void MinValue(char arr[], const int n) {

	int min = int (arr[0]);
	for (int i = 0; i < n; i++) {
		if (min > int(arr[i])) min = int(arr[i]);
	}
	cout << endl << endl << "Минимальное значение в массиве: " << char (min) << endl;
}

void MaxValue(int arr[], const int n) {
int max = arr[0];
for (int i = 0; i < n; i++) {
	if (max < arr[i]) max = arr[i];
}
cout << endl << endl << "Максимальное значение в массиве: " << max << endl;
}

void MaxValue(double arr[], const int n) {
	double max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}
	cout << endl << endl << "Максимальное значение в массиве: " << max << endl;
}

void MaxValue(float arr[], const int n) {
	float max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}
	cout << endl << endl << "Максимальное значение в массиве: " << max << endl;
}

void MaxValue(char arr[], const int n) {
	int max = int (arr[0]);
	for (int i = 0; i < n; i++) {
		if (max < int (arr[i])) max = int (arr[i]);
	}
	cout << endl << endl << "Максимальное значение в массиве: " << char (max) << endl;
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

void ShiftLeft(double arr[], const int n) {
	int m;
	cout << endl << "Введите количество элементов для сдвига влево:" << endl;
	cin >> m;
	for (int j = 0; j < m; j++) {
		double temp = arr[0];

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

void ShiftLeft(float arr[], const int n) {
	int m;
	cout << endl << "Введите количество элементов для сдвига влево:" << endl;
	cin >> m;
	for (int j = 0; j < m; j++) {
		float temp = arr[0];

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

void ShiftLeft(char arr[], const int n) {
	int m;
	cout << endl << "Введите количество элементов для сдвига влево:" << endl;
	cin >> m;
	for (int j = 0; j < m; j++) {
		char temp = arr[0];

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

void ShiftRight(double arr[], const int n) {
	int l;
	cout << endl << "Введите количество элементов для сдвига вправо:" << endl;
	cin >> l;
	for (int j = 0; j < l; j++) {
		double temp = arr[n - 1];
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

void ShiftRight(float arr[], const int n) {
	int l;
	cout << endl << "Введите количество элементов для сдвига вправо:" << endl;
	cin >> l;
	for (int j = 0; j < l; j++) {
		float temp = arr[n - 1];
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

void ShiftRight(char arr[], const int n) {
	int l;
	cout << endl << "Введите количество элементов для сдвига вправо:" << endl;
	cin >> l;
	for (int j = 0; j < l; j++) {
		char temp = arr[n - 1];
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

void PrintIndex(char arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << int(arr[i]) << "\t";
	}
	cout << endl;
}


