#include<iostream>
using namespace std;
int trip(int a[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=a[i]+a[i+1]+a[i+2];
        if(sum==0)
        {
            return 1;
        }

    }
    return 0;
}
int main()
{
    int arr[]={1, 2, 3};
    cout<<trip(arr);
}
