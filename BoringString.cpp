#include <bits/stdc++.h>
using namespace std;
#define st unordered_set

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    string r = "";
	    st<string>s;
	    r = str[0];
	    int l,mx,su;
	    l = mx = 0;
	    su = 1;
	    for(int i=1;i<n;i++)
	    {
	        if(str[i-1]!=str[i])
	        {
	            if(mx<su)
	        {
	            mx = su;
	            mx--;
	        }
	        if(s.find(r)!=s.end())
	        l = max(l,su);
	        s.insert(r);
	        r = str[i];
	        su = 1;
	        }
	        else{
	            su++;
	            r+=str[i];
	        }
	    }
	    if(s.find(r)!=s.end())
	    {
	        l = max(l,su);
	    }
	    else{
	        if(mx<su){
	            mx = su;
	            mx--;
	        }
	    }
	    int ans = max(l,mx);
	    cout << ans << endl;
	}
	return 0;
}
