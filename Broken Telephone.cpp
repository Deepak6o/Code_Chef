#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n;
        cin>>n;
        int a[100001];
        int b[100001]= {0};
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                b[i]=1;
                b[i-1]=1;
            }
        }
        int sum=0;
        for(int i=0; i<100001; i++)
        {
            sum=sum+b[i];
        }
        cout<<sum<<endl;

    }
}
