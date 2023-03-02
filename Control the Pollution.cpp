#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int d=100006;
        for(int i=0;i<=n;i++)
        {
            for(int k=0;k<=n;k++)
            {
                int v=100*k+4*i;
                if(v>=n)
                {
                    d=min(d,i*y+k*x);
                }
            }
        }
        cout<<d<<endl;


    }
}

