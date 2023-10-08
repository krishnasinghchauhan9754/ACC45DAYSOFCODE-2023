#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long w, x, y, z;
        cin >> w >> x >> y >> z;
        w = w + z * x - z * y;
        cout << w << endl;
    }
    return 0;
}