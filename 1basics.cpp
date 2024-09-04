#include<bits/stdc++.h>
using namespace std;

class Bank{
    // data members
    int secret = 34;
public:
    string name = "default";
    // method
    void msg() {
        cout << "Bank is great, " << name << endl;
    }
};


int main() {

    Bank hdfc;
    hdfc.name = "HDFC Bank";
    hdfc.msg();

    Bank sbi;
    sbi.msg();
    // we cant access private members of a class directly;
    // cout << sbi.secret << endl;

    return 0;
}