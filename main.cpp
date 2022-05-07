#include "header.h"
#include <ctime>
int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int* masint = new int[n];
	double* masdouble = new double[n];
	for (int i = 0; i < n; i++) {
		masint[i] = rand() % 201 - 100;
	}
	for (int i = 0; i < n; i++) {
		masdouble[i] = (rand() % 201 - 100) / 1.783;	
	}
	bubble(masint, n);
	bubble(masdouble, n);
	print(masint, n);
	cout << endl;
	print(masdouble, n);
	delete[] masint;
	delete[] masdouble;
}