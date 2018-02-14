#include <iostream>
#include <string>


using namespace std;

long int silnia(int n)
{
	if (n == 0 || n == 1) return 1;
	if (n > 1) return silnia(n - 1)*n;
}

int main()
{
	int n = 0, count = 0;
	int dz = 0,j=0;
	string s;
	cin >> count;
	if (0 <= count <= 1000000000)
	{
		for (int i = 0; i < count; i++)
		{
			cin >> n;

			s = to_string(silnia(n));
			if (s.length() == 1)
				cout << 0 << " " << s << endl;
			else


			{
				
				dz = atoi(s.length) - 1;
				j = atoi(s.length);
				cout << s[dz] << " " << s[j] << endl;
			}
			


		}
	}
	else return 0;



	system("pause");
	return 0;
}