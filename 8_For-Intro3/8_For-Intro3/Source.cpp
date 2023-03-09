#include <iostream>
using namespace std;

int main()
{
	int f, aprobados, reprobados, nota;

	reprobados = 0;
	aprobados = 0;

	for (f = 0; f < 10; f++)
	{
		cout << "Ingrese la nota del alumno";
		cin >> nota;
		if (nota>=7)
		{
			aprobados = aprobados++;
		}
		else
		{
			reprobados = reprobados++;
		}
	}
	cout << "aprobados ";
	cout << aprobados;
	cout << "\n";
	cout << "reprobados ";
	cout << reprobados;
	return 0;
}