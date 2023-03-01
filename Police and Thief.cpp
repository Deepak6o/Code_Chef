#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,d;
        int s=1;
        cin>>x>>y;
        if(x>y)
        {
            d=x-y;
        }
        else
        {
            d=y-x;
        }
        cout<<(d/s)<<endl;


    }
}
