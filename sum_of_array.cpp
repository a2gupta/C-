#include<iostream>
using namespace std;
int sum(int n,int arr[])
{
    int s=0;
    if(n==0)
    return s;
     s=arr[n-1]+sum(n-1,arr);
}
int main()
{
    int arr[]={2,4};
    cout<<sum(2,arr);
}