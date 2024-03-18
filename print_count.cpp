#include<iostream>
using namespace std;
void print_count(int c)
{
    if(c==0)
    return ;
    
    
    (print_count(c-1));
    cout<<c<<" ";

}

void re_print_count(int c)
{
if(c==0)
    return ;
    cout<<c<<" ";
    (re_print_count(c-1));

    

}
int main()
{
    int c;
    cin>>c;
    print_count(c);
    cout<<endl;
    re_print_count(c);
}