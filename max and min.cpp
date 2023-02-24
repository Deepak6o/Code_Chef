#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int n;
	        cin>>n;
	        int arr[n];
	        for(int i=0;i<n;i++)
	        {
	                cin>>arr[i];
	        }
	        int maxi=*max_element(arr,arr+n);
	        int mini=*min_element(arr,arr+n);
	        int res=maxi-mini;

	       for(int i=0;i<n;i++)
	        {
	                cout<<arr[i];
	        }
	        cout<<endl;
	        for(int i=0;i<n;i++)
	        {
	                if(arr[i]!=res)
                    {
                        cout<<"NO"<<endl;
                        break;
                    }

	        }
	        cout<<res<<endl;



	}

}
