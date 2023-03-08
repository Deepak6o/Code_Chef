#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x;
        cin>>n>>x;
       if(x<n)
       {
           cout<<"NO"<<endl;
       }
       else if(x%n==0)
       {
           cout<<"YES"<<endl;
       }
    }
}
