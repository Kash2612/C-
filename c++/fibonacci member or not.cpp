// fibonacci member or not
#include<bits/stdc++.h>
using namespace std;
int fibo(int n,int f, int s, int next){
    if (n==0 || n==1){
        return true;
    }
    next=f+s;
    while(next<=n)
    {
        if(next==n){
            return true;

        }
        f=s;
        s=next;
        next=f+s;
    }
    return false;
    
}

int main(){
    int n;
    cin>>n;
    int f=0;
    int s=1;
    int next=f+s;
    int x= fibo(n,f,s,next);
    cout<<x;
    return 0;
}
