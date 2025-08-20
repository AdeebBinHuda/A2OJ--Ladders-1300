#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     int sum1=0,sum2=0;
     int cnt=0;
     for(int i=0;i<1000;i++){
          for(int j=0;j<1000;j++){
               sum1 = (i*i) + j;
               sum2 = i + (j*j);
               if(sum1==n and sum2==m)
                    cnt++;
          }
     }
     cout<<cnt<<endl;
     return 0;
}


