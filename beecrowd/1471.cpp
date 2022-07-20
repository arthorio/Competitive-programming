#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int n;
	int r;
	bool verifica = true;

	while(cin >> n)
	{
		cin >> r;
		int numeros[r];

		if(r == n)
		{
			cout << "*" << endl;

			for(int i = 0; i < r; i++)
				cin >> numeros[i];
		}
		else
		{
			for(int i = 0; i < r; i++)
				cin >> numeros[i];

			for(int i = 1; i < n+1; i++)
			{
				verifica = true;
				for(int j = 0; j < r; j++)
				{
					if(i == numeros[j])
						verifica = false;
				}

				if(verifica)
				{
					cout << i << " ";
				}
			}

			cout << endl;
		}
	}

	exit(0);
}
