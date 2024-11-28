#include <iostream>
using namespace std;
int a[10000];
int main()
{
	int T,n;
	cin >> T;
	for(int t=1; t<=T; t++)
	{
		char c,c2;
		cin >> c >> c2 >> n;
		for(int i=0; i<n*n; i++) cin >> a[i];
		int bad = 0;
		for(int i=0; i<n*n; i++)
		{
			if(a[i] < 0) bad = 1;
			if(a[i] != a[n*n-1-i]) bad = 1;
		}
		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}
}
