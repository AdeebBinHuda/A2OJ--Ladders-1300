#include<bits/stdc++.h>
using namespace std;
void solve(){

    char arr[4][4];

    for(int i=0 ; i<4 ; i++)
    {
     for(int j=0; j<4 ; j++)
          cin>>arr[i][j];
    }

    for(int i=0;i<3;i++)
    {
     for(int j=0;j<3;j++)
     {
         int counter=0,counter1=0;
         if(arr[i][j]=='#') counter++;
          if(arr[i][j+1]=='#') counter++;
           if(arr[i+1][j]=='#') counter++;
            if(arr[i+1][j+1]=='#') counter++;

          if(arr[i][j]=='.') counter1++;
          if(arr[i][j+1]=='.') counter1++;
          if(arr[i+1][j]=='.') counter1++;
          if(arr[i+1][j+1]=='.') counter1++;

         if(counter>=3 || counter1>=3)
         {
            cout<<"YES"<<endl;
            return;
         }
       }
    }
    cout<<"NO"<<endl;
}
int main(){

  solve();

return 0;
}
