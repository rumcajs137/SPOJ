#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int n = 0, count = 0;
	cin >> n;
	if (n >= 150)
	{
		return 0;
	}
	string all,line;
	stringstream ss;
	char alfabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', };
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		ss.clear();
		line.clear();
		getline(cin, line, '\n');
		ss << line;
	}
	all = ss.str();
	//cout << all << endl;;

		for (int k = 0; k < alfabet[k] != '\0'; k++)
		{
			for (int j = 0; j < all.size(); j++)
			{
				if (all[j] == alfabet[k])
				{
					++count;
				}


			}
			if (count != 0)
			{
				cout << alfabet[k] << " " << count << endl;
				count = 0;
			}
		}

	//system("pause");
	return 0;
}
