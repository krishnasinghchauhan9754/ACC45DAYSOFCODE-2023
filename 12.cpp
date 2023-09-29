#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a = z-(y/x);
	    if(a<0){
	        cout<<0<<endl;
	    }
	    else
	    cout<<a<<endl;
	}
	return 0;
}