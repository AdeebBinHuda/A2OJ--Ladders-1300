#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;

int main(){
     ll x,y;
     cin>>x>>y;
     ll n;
     cin>>n;
     ll arr[6];
     arr[0]= x;
     arr[1]= y;
     arr[2]=y-x;
     arr[3]= -x;
     arr[4]= -y;
     arr[5]= x-y;

     ll ans= arr[(n-1)%6];

     ans= (ans%MOD +MOD)%MOD;
     cout<<ans<<endl;
return 0;
}
