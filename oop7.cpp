#include "header.h"

void bubble(int* mas, int size) {
	int save;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				save = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = save;
			}
		}

}

void bubble(double* mas, int size) {
	double save;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++) {
			if (mas[i] > mas[j]) {
				save = mas[i];
				mas[i] = mas[j];
				mas[j] = save;
			}
		}
}

void print(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

void print(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}