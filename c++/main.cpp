#include<bits/stdc++.h>
using namespace std;
// int pattern(int n){
//     int i,j;
    
//     for(i=0;i<n;i++){
//         for (j=0;j<n-i;j++){
//             cout<<"*";
 
//         }
//         int s=0;
//         for(j=0;j<=s;j++){
//             cout<<" ";
//             s=s+2;
            
            
//         }
//         for (j=0;j<n-i;j++){
//             cout<<"*";
 
//         }
        
//         cout<<endl;
//     }


// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         pattern(n);
//     }

//     return 0;
// }
// int sum(int n){
//     int s=0;
//     for(int i=1;i<=n;i++){
//         s =s+i;
//     }
//     cout<<s;
// }
// int main() {
//     // Write C++ code here
//     int n;
//     cin>>n;
//     sum(n);
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         int z=2*x;
//         int arr[z];
//         int j=1;
//         for(int i=0;i<z;i++){
//             arr[i]=j;
//             j++;
//         }
//         int s= 0;
//         int c= sizeof(arr)/sizeof(int);
//         for(int k=0;k<c/2;k++){
//             if (arr[k]==y){
//                 s=k;
//             }
            
//         }
//         cout<<z<<endl;
//         cout<<s<<endl;
//         int p= z-s-1;
//         cout<<p<<endl;
//         cout<<arr[p];
        
//     }
//     return 0;
// }




int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		for(int j=i;j<n;j++){
			cout<<" ";
		}
		cout<<endl;


	}

}
  


