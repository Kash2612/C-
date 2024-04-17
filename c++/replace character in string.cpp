#include<bits/stdc++.h>
using namespace std;
string replace(string s,char a, char b){
    for(int i=0;i<s.length();i++){
        if(s[i]==a){
            s[i]=b;
        }
    }
    return s;

}

int main(){
    string s;
    cin>>s;
    char a,b;
    cin>>a>>b;
    string x=replace(s,a,b);
    cout<<x<<endl;

    return 0;
}