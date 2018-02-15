#include <iostream>
#include <cstring>
 
using namespace std;
 
#define size 1000
 
char* string_merge(char* s1, char* s2)
{
 
	char* merged = new char[(size * 2 - 1) * sizeof(char)];
 
	int j = 0;
 
	for (int i = 0; i < size; i++)
	{
 
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
 
		merged[j] = s1[i];
		j++;
 
		merged[j] = s2[i];
		j++;
 
	}
	merged[j] = '\0';
 
	return merged;
 
}
 
int main()
{
	int t, n;
	char S1[size], S2[size], *S;
 
	cin >> t;
	cin.getline(S1, size);
 
	while (t)
	{
		cin.getline(S1, size, ' ');
		cin.getline(S2, size);
 
		S = string_merge(S1, S2);
		cout << S << endl;
		delete[] S;
		t--;
 
 
	}
	return 0;
}
