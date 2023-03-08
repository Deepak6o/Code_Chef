#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        int temp=-1;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(sum+a[i]>=k)
            {
                temp=i;
                break;
            }

            sum+=a[i];
            count++;
        }
        if(temp==-1)
            cout<<n<<endl;
        else
        {
            if(a[temp]%2==0)
            {
                if((a[temp]/2+sum)<=k)
                    count++;
            }
            else
            {
                if((a[temp]/2+sum+1)<=k)
                    count++;
            }
            cout<<count<<endl;
        }

    }
}
