#include<iostream>
#include<string.h>
#include<cmath>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
#define ll long long
void solve(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(auto& i: arr)
     cin>>i;

 bool flag = true;
 int x=0,y=0, z=0;

 for(int i=0;i<n;i++){
     if(arr[i]==25){
          x++;
     }
     else if(arr[i]==50){
         if(x==0){
          flag= false;
          break;
         }else {
              x--;
              y++;
         }
     }
     else{
        if(y>=1 && x>=1){
          y--;
          x--;
        }
        else if(y>=0 && x>=3){
          x-=3;
        }
        else{
          flag = false;
          break;
        }
     }
 }
 if(flag == true){
     cout<<"YES\n";
 }else{
      cout<<"NO\n";
 }
}

signed main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

     solve();

    return 0;
}
