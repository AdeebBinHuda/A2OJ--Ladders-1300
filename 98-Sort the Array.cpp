#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(){
     ll n;
     cin>>n;

     vector<ll>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int mn =a[0];
     bool flag = false;
     for(int i=0;i<n;i++){
          if(a[0]<=a[i]){
               flag = true;
          }
     }

     if(true){
          cout<<"yes"<<endl;


     }
     else{
          cout<<"no"<<endl;
     }
}
int main(){
     solve();
     return 0;
}
