#include <iostream>
using namespace std;

int main() {
    int tesst;
    cin >> tesst;

    while (tesst--) {
        int srav;
        cin >> srav;

        if (srav >= 1 && srav <= 15) {
            if ((srav % 2 == 0 && 2<=srav &&10>=srav)||(srav%2!=0 && 1<=srav &&9>=srav)) {
                cout << "Lower Double" << endl;
            } else {
                cout << "Lower Single" << endl;
            }
        } else{
            if ((srav % 2 == 0&&16<=srav&&24>=srav )|| (srav%2!=0 && 17<=srav &&25>=srav)) {
                cout << "Upper Double" << endl;
            }
            else
            {
              cout<<"Upper Single"<<endl;
            }
            }
        }
    

    return 0;
}
