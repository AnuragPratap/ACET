#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;             //taking input of n
    string* word=new string[n];
    for(int i=0;i<n;i++){           //taking n strings as inputS
        cin>>word[i];
    }
    for( int i=0;i<n;i++){
        int len=word[i].length();
        if(word[i].length()<101 && word[i].length()>10){
            cout<<word[i][0]<<word[i].length()-2<<word[i][len-1]<<endl;   
        }
        else
           cout<<word[i]<<endl;
    }
}
