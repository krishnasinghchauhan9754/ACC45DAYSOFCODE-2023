#include<iostream>
#include<map>
#include<string>
using namespace std;


void solution(int x, int y)
{
    if(x < y)
    {
        cout<<(y-x)<<endl;
    }
    else if(x >= y)
    {
        cout<<(x-y)<<endl;
    }
}

int main()
{
    int tc; cin>>tc;

    while(tc--)
    {
        int n; cin>>n;
        int m; cin>>m;
        
        solution(n,m);

    }
    return 0;
}
