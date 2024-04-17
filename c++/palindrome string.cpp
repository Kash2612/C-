#include<bits/stdc++.h>
using namespace std;
string checkPalindrome(string s){

    for(int i=0; i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    string s;
    cin>>s;
    string x=checkPalindrome(s);
    cout<<x<<endl;


    return 0;
}