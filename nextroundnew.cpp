#include<iostream>
using namespace std;
int main()
{
    int n,k;
   int next=0;              // contestant=0 because number of contestant initially is 0
    cin>>n>>k;             //taking the size of array and k'th index
    int a[50];             // array to store the scores of contestant
    for(int i=0;i<n;i++)
    cin>>a[i];        // to input the scores in the array
    for(int i=0;i<n;i++){
        
            if(a[i]>=a[k-1] && a[i]>0 ){
            next++;   }    // number of contestant having more than or equals to k'th ''index'' marks
       
    }
        cout<<next;
    return 0;
}