#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int a,b,c;
	        cin>>a>>b>>c;
	        int m=min(b,c);
	        b=b-m;
	        c=c-m;

	        if(a>b && a>c)
	        {
	                cout<<"YES"<<endl;
	        }

	        else
	        {
	                cout<<"NO"<<endl;
	        }
	}
	return 0;
}
