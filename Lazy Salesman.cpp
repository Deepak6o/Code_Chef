#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,w;
        cin>>n>>w;
        int a[n];
        int r=0;

        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        int k;
        for(k=n-1; k>=0; k--)
        {

            r=r+a[k];
            if(w<=r)
            {
                break;
            }
        }
        cout<<k<<endl;
    }
}
