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

	string a, b;
	for(int i = 0; i < c; i++)
	{
		cin >> a;
		for (auto it = a.rbegin(); it != a.rend(); it++) 
		{
			if(!isupper(*it))
			{
				b += (*it);
			}

		}

		cout << b << endl;

		b = "";
	}

	exit(0);
}
