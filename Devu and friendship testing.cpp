#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
}
