#include<iostream>
using namespace std;
bool sorted_or_not(int n,int arr[])
{
    
    if(n==0)
    return true;

    if(arr[n]<arr[n-1])
    return false;
    sorted_or_not(n-1,arr);
}
int main()
{
    int arr[10]={1,2,3,9,5,6,7,8,9,10};
    cout<<sorted_or_not(10,arr);
}