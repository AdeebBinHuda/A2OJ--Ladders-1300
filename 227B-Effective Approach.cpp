#include<iostream>
#include<string.h>
#include<cmath>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll a[n],pos[n+1];

    for(ll i=0;i<n;i++){
       cin>>a[i];
       pos[a[i]] =i+1;
    }

    ll m;
    cin>>m;

    ll vasya=0 , petya=0 ;
    while(m--){
     int x;
     cin>>x;
     vasya += pos[x];
     petya += n-pos[x]+1;
    }

    cout<<vasya<<" "<<petya<<endl;

}

signed main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

     solve();

    return 0;
}
