#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;

void notas()
{
	int n, k, i;
	long long  unsigned soma=0;
	cin>>n>>k;
	while(!cin.eof())
	{
		soma=0;
    vector<int> notas(n);

		for(i=0; i<n; i++)
		{
      cin>>notas[i];
		}
		sort(notas.begin(), notas.end());
		for(i=(n-k); i<n; i++)
		{
			soma+=notas[i];
		}
		printf("%llu\n", soma%(1000000000ull+7));
		cin>>n>>k;
	}
}
int main()
{
	notas();
	return 0;
}

