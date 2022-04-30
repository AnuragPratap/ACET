#include<iostream>
using namespace std;
int main()
{
    int a[10],n=10,key;
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key you want to search:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==a[i]){
        cout<<"key fount at index:"<<i;
        return 0;
        }
      

    }
    cout<<"not found";

}