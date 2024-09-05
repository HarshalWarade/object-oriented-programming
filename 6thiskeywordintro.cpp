#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    double _length;
    double _breadth;

    public:
    Rectangle(const double &length, const double &breadth);
    double Area();
    bool compare(Rectangle rectangle);

};

Rectangle::Rectangle(const double &length = 0.0, const double &breadth = 0.0) {
    _length = length;
    _breadth = breadth;
}
double Rectangle::Area() {
    return _length * _breadth;
}
bool Rectangle::compare(Rectangle rectangle) {
    return this -> Area() > rectangle.Area();
}

int main() {

    Rectangle r1(3.0, 3.0);
    Rectangle r2(4.0, 5.0);
    printf("Address of r1 is %p\n", &r1);
    
    cout << r1.Area() << endl;
    cout << r2.Area() << endl;
    if(r1.compare(r2)) {
        cout << "R1 is greater than R2" << endl;
    } else {
        cout << "R2 is greater than R1" << endl;
    }

    return 0;
}