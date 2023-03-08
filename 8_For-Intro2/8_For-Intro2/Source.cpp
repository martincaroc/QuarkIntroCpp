#include<iostream>

using namespace std;

int main()
{
	int suma, valor, f, promedio;

	suma = 0;

	for (f = 1; f <= 10; f++)
	{
		cout << "Ingrese un valor";
		cin >> valor;
		suma = suma + valor;
	}
	promedio = suma / f;
	cout << suma;
	cout << promedio;

	return 0;
}