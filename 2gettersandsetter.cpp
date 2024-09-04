#include<bits/stdc++.h>
using namespace std;

class Bank{
    
    int _secret = 34;
    
    public:
    string name = "default";
    
    void msg() {
        cout << "Bank is great, " << name << endl;
    }
    
    void setSecret(const int &newSecret) {
        _secret = newSecret;
    }

    int getSecret() {
        return _secret;
    }

};


int main() {

    Bank hdfc;
    hdfc.name = "HDFC Bank";

    hdfc.setSecret(5324);
    cout << hdfc.getSecret() << endl;
    
    
    Bank sbi;
    
    

    return 0;
}