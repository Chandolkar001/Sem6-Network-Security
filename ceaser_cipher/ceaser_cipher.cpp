#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string s,t;
    int key = 3;
    cout<<"Enter the message\n";
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i] - 'A' + key)%26 + 'A';
    }
    cout<<"\n\nEncrypted message is "<<t<<'\n';
    return 0;
}