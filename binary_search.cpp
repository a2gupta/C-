#include<iostream>
using namespace std;
int binary_search(int *arr,int s ,int e,int k)
{
    if(s>e)
    return false;

    int mid = s+ (e-s)/2; 
    if(arr[mid]==k)
    return mid;

    if(arr[mid]<k)
    {
        return binary_search(arr,mid+1,e,k);
    }
    else
     {
        return binary_search(arr,s,mid-1,k);
    }

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<binary_search(arr,0,10,5);
}