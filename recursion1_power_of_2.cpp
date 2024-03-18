#include<iostream>
using namespace std;
int po(int i)
{
    if(i==0)
    return (1);
    
    return(2*po(i-1));
}
int main()
{
    int i ;
    cin>>i;
    cout<<po(i);
}