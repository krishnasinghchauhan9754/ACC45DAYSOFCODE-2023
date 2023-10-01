#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
      int x,y;
      cin>>x>>y;
      if(x%y==0)
        cout<<x/y<<endl;
      else if(x/y==0)
        cout<<x<<endl;
      else{
        int a=((x%y)+(x/y));
        cout<<a<<endl;
      }
   }
}
