#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    int sa = pow(2,b);
	    for(int i = 0;i<a;i++)
	    {
	        sa  = sa/2;     // resulting 
	    }
	    cout << sa << endl;
	}
	return 0;
}
