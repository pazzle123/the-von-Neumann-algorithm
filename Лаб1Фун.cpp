// Лаб1Фун.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void Alg(double* mas, int n) {
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < n - 1; i += 2) {
		if (mas[i] > mas[i + 1])
			{
			int m = mas[i];
			mas[i] = mas[i + 1];
			mas[i + 1] = m;
			
		}
	}
	cout << "1ая сортировка->" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i += 4)
	{
		if (n - i >= 4) {
			for (int j = i; j < i + 4; j++)
			{
				for (int k = j + 1; k < i + 4; k++) {
					if (mas[j] > mas[k]) {
						int p = mas[j];
						mas[j] = mas[k];
						mas[k] = p;
					}
				}
			}
			cout << "2ая сортировка->" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;

		}

	}
for (int i = 0; i < n; i++)
{
	for (int j=0; j < n - i - 1; j++) {
		if (mas[j] > mas[j+1]) {
			int y = mas[j];
			mas[j] = mas[j+1];
			mas[j+1] = y;
		}
	}
}
cout << endl;
cout << "ФИНАЛ->" << endl;
for (int i = 0; i < n; i++)
{
	cout << mas[i] << " ";
}


	

}

int main()
{

	int const n = 5;
	double k[n] = {};
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		
		k[i] =1+ rand() % 10;
		cout << k[i] << " ";
	}
	cout << endl;

	Alg(k, n);



}

