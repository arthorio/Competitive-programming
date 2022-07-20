#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;

	string comando;
	int num, min;

	for(int i = 0; i < n; i++)
	{
		cin >> comando;

		if(comando == "PUSH")
		{
			cin >> num;
			v.push_back(num);
		}
		else if(comando == "POP")
		{
			if(v.empty())
			{
				cout << "EMPTY" << endl;
				continue;
			}

			v.pop_back();
		}
		else 
		{
			if(v.empty())
			{
				cout << "EMPTY" << endl;
				continue;
			}

			min = v.front();
			for (auto i = v.begin(); i != v.end(); ++i)
			{
				if(*i < min)
				{
					min = *i;
				}
			}

			cout << min << endl;
		}
	}
}
