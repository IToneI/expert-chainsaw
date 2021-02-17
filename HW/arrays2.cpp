#include<iostream>
using namespace std;
//например дана матрица MxN, если в строке встречается значение 0, удвоить все элементы, строки, лежащие слева



void funaddarray() {

	int n = 0;
	int m = 0;
	cin >> n >> m;

	int** a = new int* [n];
	for (int i = 0; i < n; i++) {

		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			cin >> a[i][j];

		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			cout << a[i][j] << "\t";
		}

		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (a[i][j] == 0) {
			
				for (int k = 0; k < j; k++) {

					a[i][k] *= 2;
				}

			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			cout << a[i][j] << "\t";
		}

		cout << endl;
	}




	for (int i = 0; i < n; i++) {
		
		delete[] a[i];
	}
	delete[]a;


}