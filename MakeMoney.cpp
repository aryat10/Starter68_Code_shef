#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,c;
	    cin >> n >> x >> c;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    long long int s = 0;
	    int co = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(x-a[i]>c)
	        {
	            s+=x;
	            co+=c;
	        }
	        else
	        {
	            s+=a[i];
	        }
	        
	    }
	    cout << s-co << endl;
	}
	return 0;
}
