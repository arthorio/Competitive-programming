#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int t;
	cin >> t;

	int n;
	int aux = 0;
	int soma = 0;
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		for(int j = 0; j < n; j++) 
		{
			aux = pow(2, j);
			soma += aux;
		}
		
		cout << soma << endl;
		aux = 0;
		soma = 0;
	}


	exit(0);
}
