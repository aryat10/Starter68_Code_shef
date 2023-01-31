#include <bits/stdc++.h>          // This library includes every function 
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    if(x>y)    // checking both conditions 
	    {
	        cout << "LOSS" << endl;
	    }
	    else if(x<y)      
	    {
	        cout << "PROFIT" << endl;
	    }
	    else
	    {
	        cout << "NEUTRAL" << endl;
	    }
	}
	return 0;
}
