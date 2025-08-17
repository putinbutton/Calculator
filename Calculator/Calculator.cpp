#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

int main()
{
	int value;
	double a;
	double b;

	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;

	cout << "Wybierz operacje: 0 - dodawanie, 1 - odejmowanie, 2 - mnozenie, 3 - dzielenie, 4 - pierwiastkowanie kwadratowe, 5 - potegowanie" << endl;
	cin >> value;

	if (value < 0 || value > 5) {
		throw invalid_argument("Nieznana operacja");
	}

	double result;
	switch (value) {
	case 0:
		result = a + b;
		break;
	case 1:
		result = a - b;
		break;
	case 2:
		result = a * b;
		break;
	case 3:
		if (b != 0) {
			result = a / b;
		}
		else {
			throw invalid_argument("Dzielenie przez zero");
		}
		break;
	case 4:
		result = sqrt (a);
		break;
	case 5:
		result = pow(a, b);
		break;
	}

	cout << "Wynik: " << result << endl;

	return 0;
}

