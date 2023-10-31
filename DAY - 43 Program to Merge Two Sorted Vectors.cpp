#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
/* Function to input vector elements */
void enter_elem(vector<int>& a)
{
    int alen, val;
    cout << "Enter number of elements : ";
    cin >> alen;
 
    for (int i = 0; i < alen; i++)
    {
        cin >> val;
        a.push_back(val);
    }
}
 
/* Function to combine two integer vectors */
vector<int> comb(vector<int> a, vector<int> b)
{
    int alen = a.size();
    int blen = b.size();
    int tlen = alen + blen;
    vector<int> c(tlen);
    int i = 0, j = 0, k = 0;
 
    while (i < alen && j < blen)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < alen)
        c[k++] = a[i++];
 
    while (j < blen)
        c[k++] = b[j++];
 
    return c;
}
 
int main()
{ 
    vector<int> a;
    vector<int> b;
 
    cout << "Initialising vector A" << endl;
    enter_elem(a);
    sort(a.begin(), a.end());
 
    cout << "Initialising vector B" << endl;
    enter_elem(b);
    sort(b.begin(), b.end());
 
    vector<int> c = comb(a, b);
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << "  ";
    cout << endl;
}
