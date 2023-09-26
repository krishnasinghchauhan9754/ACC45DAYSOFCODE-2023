

#include<bits/stdc++.h>
using namespace std;
 #define nn  "\n"

void inline solve()
{
  int x,y;
  cin>>x>>y;
  if(x >= y)
  {
    cout<<0<<"\n";
  }
  else
  {
    cout<<((y-1)/x)<<nn;
  }

}
  
signed  main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int TT=1;
    cin>>TT;
    while(TT--){ solve();}
    return 0;
}
