#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int num, rev = 0;
 
    cout<<"Enter any number:";
    cin>>num;
 
     while (num > 0) {
      rev = rev * 10;
      rev = rev + num % 10;
      num = num / 10;
    }
 
    cout<<"Reversed number is: "<<rev;
 
    return 0;
}