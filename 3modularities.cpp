#include<bits/stdc++.h>
using namespace std;

class Bank{
    
    int _secret = 34;
    
    public:
    string name = "default";
    
    void msg();
    
    void setSecret(const int &newSecret) {
        _secret = newSecret;
    }

    int getSecret()const;

};

void Bank::msg() {
    cout << "Bank is great, " << name << endl;
}
int Bank::getSecret()const  {
    return _secret;
}

int main() {

    Bank hdfc;
    hdfc.name = "HDFC Bank";

    hdfc.setSecret(5324);
    cout << hdfc.getSecret() << endl;
    
    
    const Bank sbi;
    cout << sbi.getSecret() << endl;
    
    

    return 0;
}


// Non-Constant objects can access constant methods, but when we try to create constant objects they can't access non-constact methods. So, it's a good practice to declare the method as constant in the class, to allow constant object creation as well, which can access data members.
// In the above case, the SBI bank is a constant object which can access only constant methods, so declaring a method as a constant is class is a good practice as both constant as well as non-constant objects can access it.