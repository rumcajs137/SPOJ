#include <iostream>

using namespace std;


int main()
{
	unsigned int n, lp, p, d,w;
	bool t;

	cin >> n;
	if(n>100000)
	{
		return 0;
	}
	lp = 0;
	p = 2;
	while (lp < n)
	{
		cin >> p;

		t = true;
		for (d = 2; d < p; d++)
			if (p % d == 0)
			{
				t = false;
				break;
			}
		
		if (t && p!=1 )
		{
			cout << "TAK" << endl;
			lp++;
		}
		else
		{
			cout << "NIE" << endl;
			lp++;
		}
		p++;
	}
	cout << endl;
	return 0;
}