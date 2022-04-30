#include<iostream>
using namespace std;
int main()
{
    int a;  
    cin>>a;
    int* pa=&a;
    int b;
    cin>>b;
    int* pb=&b;
    a=((*pa)+(*pb));
    *pb=((*pb)+(*pb));
    b=abs((*pa)-(*pb));
    cout<<a<<endl;
    cout<<b<<endl;
}