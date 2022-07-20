#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

	int q, d, p;
	
	while((cin >> q))
	{
		if(q == 0)
			break;

		cin >> d >> p;

		int paginas = 0;

		paginas = (p*d*q) / (p - q);

		if(paginas > 1)
			cout << paginas << " paginas" << endl;
		else
			cout << paginas << " pagina" << endl;
	}

	exit(0);
}
