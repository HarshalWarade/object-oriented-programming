#include<bits/stdc++.h>
using namespace std;

class Human {

    int _age = 0;
    string _name = "";
    string _gender = "";
    
    public:
    Human(const string &newName, const string &newGender);
    int getAge()const;
    void setAge(const int &newAge);
    
    string getName()const;
    void setName(const string &newName);
    
    string getGender()const;
    void setGender(const string &newGender);

    // copy constructor
    Human(const Human &);

};

Human::Human(const string &newName, const string &newGender) : _name(newName), _gender(newGender){};

int Human::getAge()const {return _age;};
void Human::setAge(const int& newAge) {_age = newAge;};

string Human::getName()const {return _name;};
void Human::setName(const string &newName) {_name = newName;};

string Human::getGender()const {return _gender;};
void Human::setGender(const string &newGender) {_gender = newGender;};

Human::Human(const Human& values) {
    _name = "copy-of-" + values._name;
    _gender = values._gender;
}

int main() {
    Human earlyHuman("harshal", "male");
    cout << earlyHuman.getName() << endl;
    earlyHuman.setAge(9732);
    cout << earlyHuman.getAge() << endl;
    cout << earlyHuman.getGender() << endl;

    Human newCopy = earlyHuman;
    cout << newCopy.getName() << endl;

    return 0;
}