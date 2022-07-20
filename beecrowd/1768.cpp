#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int n, esp, ast;
	while(cin >> n)
	{
		esp = n/2;
		ast = 1;

		while(ast <= n)
		{
			for(int j = 0; j < esp; j++) cout << " ";
			for(int i = 0; i < ast; i++) cout << "*";

			ast += 2;
			esp--;

			cout << endl;
		}	
	
		ast = 1;
		esp = n/2;
		while(ast <= 3)
		{
			for(int j = 0; j < esp; j++) cout << " ";
			for(int i = 0; i < ast; i++) cout << "*";

			ast += 2;
			esp--;

			cout << endl;
		}

		cout << endl;
	}

	exit(0);
}
