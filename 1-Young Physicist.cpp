#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n;
  cin>>n;
  int x1=0,y1=0,z1=0;
  for(int i=0;i<n;i++){
     int x,y,z;
     cin>>x>>y>>z;
     x1+=x;
     y1+=y;
     z1+=z;
  }
  if(x1==0 && y1==0 && z1==0){
     cout<<"YES\n";
  }else {
       cout<<"NO\n";
  }
   return 0;

}
