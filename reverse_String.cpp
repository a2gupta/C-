#include<iostream>
using namespace std;
void reverse(string &name,int i,int j)
{
    cout<<"call for reverse";
    if(i>j)
    return;
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}
int main()
{
    string name = "arpit";
    reverse(name,0,name.length()-1);
    cout<<name;
}