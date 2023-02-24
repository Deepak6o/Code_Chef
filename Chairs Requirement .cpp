#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(x-y)<<endl;
        }
    }
}
