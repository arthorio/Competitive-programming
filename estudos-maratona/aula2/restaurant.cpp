#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.s < b.s;
}

int main()
{ _
	int n; cin >> n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++)
	{
		int a, b; cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmp);
	
	int ans = 0;
	int fim = -1;
	for(int i =0; i<n; i++)
	{
		if(v[i].f > fim)
		{
			fim = v[i].s;
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}
