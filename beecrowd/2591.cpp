#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int c;
	cin >> c;

	string a;
	int aux = 0;
       	int aux2 = 0;
	bool verifica = true;
	bool primeiro = true;
	for(int i = 0; i < c; i++)
	{
		cin >> a;
		for (auto it = a.begin(); it != a.end(); it++) 
		{

			if((*it) == 'a' && verifica)
			{	
				aux++;
				primeiro = false;
			}
			else if(!primeiro)
			{
				verifica = false;
			}

			if((*it) == 'a' && !verifica) aux2++;
		}

		cout << "k";
		for(int l = 0; l < aux*aux2; l++) cout << "a";

		aux = 0;
		aux2 = 0;
		verifica = true;
		primeiro = true;
		cout << endl;
	}

	exit(0);
}
