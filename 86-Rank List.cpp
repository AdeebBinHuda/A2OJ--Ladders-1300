#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&p1, pair<int,int>&p2){
     if(p1.first>p2.first)
          return 1;
     else if(p1.first == p2.first)
          return (p1.second< p2.second);
     else return 0;
}
int main(){
      int n,k;
      cin>>n>>k;
    vector< pair<int,int>>Pair_name(n);
     for(int i=0;i<n;i++){
          cin>>Pair_name[i].first>>Pair_name[i].second;
     }

     sort(Pair_name.begin(),Pair_name.end(),cmp);

      int out=0;
      for(auto u: Pair_name){
          if(u==Pair_name[k-1])
               out++;
      }
      cout<<out<<endl;
return 0;
}

