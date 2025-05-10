#include <iostream>

using namespace std;

/*
int Sum(int a, int b);
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);
*/

int Factorial (int n);
double Power(double a, int m);

void main() {
	setlocale(LC_ALL, "");

	/*
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b; 
	int c = Sum (a, b); // Использование функции (Вызов функции - Function call)

	cout << a << " + "<< b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference (a,b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;

	
	*/
	
	int n, m;
	double a;
	
	cout << "Введите число: "; cin >> n;
	cout << "Факториал числа: " << Factorial(n) << endl;
	cout << endl;

	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите степень числа: "; cin >> m;
	cout << "Степень числа: " << Power(a, m) << endl;
}
/*
int Sum(int a, int b) {
	int c = a + b;
	return c;
}

int Difference(int a, int b) {
	return a - b;
}

int Product(int a, int b) {
	return a * b;
}

double Quotient(int a, int b) {
	return (double)a / b;
}
*/

int Factorial(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
	f *= i;
	}
return f;
}

double Power(double a, int m) {
	double N = 1;
	if (m < 0) {
		a = 1 / a;
		m = -m;
	}
	for (int i = 0; i < m; i++) {
	N *= a;
	}
return N;
}









