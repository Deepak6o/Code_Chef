#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int x,y,z,res=0;
	        cin>>x>>y>>z;

	        if(x*10>=y)
	        {
	             res=y*z;
	        }
	        else
	        {
	                res=x*10*z;
	        }
	        cout<<res<<endl;
	}
	return 0;
}
