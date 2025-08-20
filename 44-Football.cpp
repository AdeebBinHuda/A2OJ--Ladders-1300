#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void solve(){
     int n;
     cin>>n;
     int cnt=0;
     vector<string>s(n);
     unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
      cin>>s[i];
      mp[s[i]]++;
    }
    sort(s.begin(),s.end());


    if(mp[s[0]]> mp[s[n-1]])
     cout<<s[0]<<'\n';

    else cout<<s[n-1]<<'\n';

}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif


      solve();

    return 0;
}
