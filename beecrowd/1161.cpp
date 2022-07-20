#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int n = 0;
	int m = 0;
	while(cin >> n)
	{	
		cin >> m;

		ll fat1 = 1;
	       	ll fat2 = 1;

		for(int i = n; i != 0; i--)
			fat1 *= i;

		for(int j = m; j != 0; j--)
			fat2 *= j;

		cout << fat1+fat2 << endl;
		
		n = 0;
		m = 0;
	}

	exit(0);
}
