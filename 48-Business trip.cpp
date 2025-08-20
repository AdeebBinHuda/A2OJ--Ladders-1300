#include<bits/stdc++.h>
using namespace std;
int main(){
     int k;
     cin>>k;
    vector<int>a(12);
     for(int i=0;i<12;i++){
          cin>>a[i];
     }
     sort(a.rbegin(),a.rend());
     if(k==0){
          cout<<0<<endl;
         return 0;
     }
     int sum=0;
    int cnt=0;
     for(int i=0;i<12;i++){
          sum+=a[i];
          cnt++;
          if(sum>=k){
               cout<<cnt<<endl;
               break;
          }

     }
     if(sum <k){
          cout<<-1<<endl;
     }
     return 0;
}
