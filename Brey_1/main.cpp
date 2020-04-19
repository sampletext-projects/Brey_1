#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	double n;
	cin >> n;

	double procent = 1.06;
	double infl = 1.035;
	double total_procent = 1;
	double total_infl = 1;
		
	for (int year = 1; year <= 10; year++)
	{
		total_procent *= procent;
		total_infl *= infl;
		cout << "Лет прошло: " << setw(2) << year << ", на счету: " << setw(7) << n * total_procent <<
			", с учётом инфляции: " << setw(7) << n * total_procent / total_infl << "\n";
	}

	system("pause");

	return 0;
}
