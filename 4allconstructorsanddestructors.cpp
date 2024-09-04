#include<bits/stdc++.h>
using namespace std;

class Phone {
    string _name = "";
    string _os = "";
    int _price = 0;

    public:
    Phone(); // default constructor
    Phone(const string &name, const string &os, const int& price); // Parameter constructor
    Phone(const Phone &); // copy constructor

    string getName() {return _name;};
    string getOS() {return _os;};
    int getPrice() {return _price;};

    ~Phone();
    
};

// default constructor
Phone::Phone() : _name(), _os(), _price() {
    puts("Default Constructor");
}

// parameter constructor
Phone::Phone(const string &name, const string &os, const int& price) : _name(name), _os(os), _price(price){};

// copy constructor
Phone::Phone(const Phone &values) {
    _name = "new-" + values._name;
    _os = "skinned-" + values._os;
    _price: values._price;
}


// destructor - for static allocation
Phone::~Phone(){
    cout << "Destructor called for " << _name << endl;
}


int main() {
    
    Phone vivo("Y15", "Android", 13500);
    // cout << vivo.getName() << endl;
    cout << vivo.getOS() << endl;
    // cout << vivo.getPrice() << endl;

    Phone vivo16 = vivo;
    cout << vivo16.getOS() << endl;

    return 0;
}