#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<unordered_set>
#include<limits.h>
#include<iomanip>
#include<set>
#include<unordered_map>
using namespace std;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define PI 2.0 * acos(0.0)
#define Dpos(n) fixed << setprecision(n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
const ll MOD = 1e9 + 7;
const ll MAX = 1e18 + 1;
const ll N = 1e5 + 1;
bool cmp(pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b)
{
    return a.second < b.second;
}
void solve()
{

}
int main()
{
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     int m;
     cin>>m;
     vector<int>b(m);
     for(int i=0;i<m;i++){
          cin>>b[i];
     }
     int cnt1=0;
     int max1= INT_MIN;
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               if(b[i]%a[j]==0){
                   if(max1 ==(b[i]/a[j])) cnt1++;
                   else if(max1< (b[i]/ a[j])){
                      cnt1= 1;
                      max1= (b[i]/a[j]);
                   }
               }
          }
     }
     cout<<cnt1<<'\n';

   return 0;
}
