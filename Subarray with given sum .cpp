#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,7,5};
    int s=12;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=a[i];
        for(int j=i+1;j<=5;j++)
        {
            if(sum==s)
            {
                cout<<i<<" "<<j-1;
            }
            if(sum>s || j==5)
            {
                break;
            }
            sum=sum+a[j];
        }
    }
}
