#include<iostream>
using namespace std;
void countsort(int arr[],int n,int k)
{
    int con[k];
    for(int i=0;i<k;i++)
    {
        con[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        con[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        con[i]=con[i-1]+con[i];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[con[arr[i]]-1]=arr[i];
        con[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    cout<<endl;
    countsort(arr,n,k);
    print(arr,n);
}
