#include <iostream>
#include <string>

using namespace std;

int tab[] = { 0,0,0,0,0,0,0,0,0,0 };

class Operacje
{
public:

	int dodawanie(int a, int b)
	{
		return a + b;
	}

	int odejmowanie(int a, int b)
	{
		return a - b;
	}

	int mnozenie(int a, int b)
	{
		return a*b;
	}

	int dzielenie(int a, int b)
	{
		return a / b;
	}

	int modulo(int a, int b)
	{
		return a%b;
	}
};


int main()
{
	Operacje math;
	string a;
	int b, c, d;


	//cout << "Podaj operator, argument 1 i argument 2" << endl;
	while (cin >> a >> b >> c)
	{
		
		if (a == "z")
		{
			tab[b] = c;
		}

		if (a == "+")
		{
			cout << math.dodawanie(tab[b], tab[c]) << endl;
		}
		if (a == "-")
		{
			cout << math.odejmowanie(tab[b], tab[c]) << endl;
		}
		if (a == "*")
		{
			cout << math.mnozenie(tab[b], tab[c]) << endl;
		}
		if (a == "/")
		{
			cout << math.dzielenie(tab[b], tab[c]) << endl;
		}
		if (a == "%")
		{
			cout << math.modulo(tab[b], tab[c]) << endl;
		}


	}
	//system("pause");
	return 0;
}