#include<bits/stdc++.h>
using namespace std;
int solve(){
     int n,m,d;
     cin>>n>>m>>d;

     vector<int>arr(n*m);
     for(int i=0;i<n*m;i++){
          cin>>arr[i];
     }
     sort(arr.begin(),arr.end());

     int med= arr[n*m/2];
     int ans= arr[0]%d;
     int ANS = 0;

     for(int i=0;i<n*m;i++){
          ANS += abs(arr[i]-med);
     }

     for(int i=0;i<n*m;i++){
          arr[i]=arr[i]%d;
          if(arr[i]!=ans){
               cout<<-1;
               return 0;
          }
     }
     cout<<ANS/d<<endl;
     return 0;
}
int main(){

     solve();
}
