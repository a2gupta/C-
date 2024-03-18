#include<iostream>
using namespace std;
int sorted_or_not(int a,int n,int arr[])
{
    
    if(n==0)
    return false;

    if(arr[n-1]==a)
    return (n);
    sorted_or_not(a,n-1,arr);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sorted_or_not(5,10,arr);
}