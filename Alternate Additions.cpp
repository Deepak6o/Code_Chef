#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"Yes"<<endl;
        }
        int diff=(b-a)%3;
        if(diff==0 || diff==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


    }
}
