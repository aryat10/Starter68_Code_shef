#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    int a,c;
	    cin >> a >> c;
	    float d = (float)a;
	    float j = (float)c;
	    if((a+c)/2==(d+j)/2)
	    {
	        cout << (a+c)/2 << endl;
	    }
	    else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}
