#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	while( t !=0)
	{
	    int x,y ;
	    cin >> x >> y;
	    if( (x- (y*10)) > 0 )
	    {
	        cout <<"YES"<<endl;
	    }
	    else{
	        cout <<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}