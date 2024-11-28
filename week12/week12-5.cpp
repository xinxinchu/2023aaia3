#include <iostream>
using namespace std;
int a[100][100];
int main()
{
	int T,n;
	cin >> T;// step01
	for(int t=1; t<=T; t++)
	{
		char c,c2;
		cin >> c >> c2 >> n; //step01
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin >> a[i][j]; // step03
			}
		}

		int bad = 0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(a[i][j]<0) bad = 1;
				if(a[i][j] != a[n-1-i][n-1-j]) bad = 1;
			}
		}

		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	} //step02
}
