#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 1e5+5;

void solve() {
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   a = max(a, b);
   c = max(c, d);
   if(a == c) puts("TIE");
   else if(a < c) puts("P");
   else puts("Q");
}

int main() {
   int t; cin >> t;
   while(t--) solve();
}
