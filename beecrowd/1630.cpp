#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc(int a, int b)
{
	if(a%b == 0)
		return b;
	else
		return mdc(b, a%b);
}

int main() { _
	
	int x, y;
	int aux;
	int aux2;

	while(cin >> x >> y)
	{
		aux2 = mdc(x, y);
		aux = (2*x + 2*y) / (aux2);

		cout << aux << endl;
	}

	exit(0);
}
