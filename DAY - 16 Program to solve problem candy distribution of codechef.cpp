#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,o;
        cin>>n>>m;
        o=n%m;
        if(o==0)
        {
            if((n/m)%2!=0)
            {
            cout<<"no"<<endl;
            }
            else
            {
            cout<<"yes"<<endl;
            }
        }
        else
        cout<<"no"<<endl;
    }
	return 0;
}
