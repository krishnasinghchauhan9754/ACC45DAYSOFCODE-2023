#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	   if(a>=b)
	   {
	       int ans=7-a;
	       cout<<ans<<endl;
	   }
	   else
	   {
	       int ans=7-b;
	       cout<<ans<<endl;
	   }
	}
	return 0;
}