#include <iostream>  
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() { 
        x = 0; 
        y = 0;
        cout << this << " constructor" << endl;
    }
    Point(int valueX, int valueY) { 
        x = valueX;
        y = valueY;
        cout << this << " constructor" << endl;
    }
    int  GetX() { 
        return x;
    }
    void SetX(int valueX) { // method that establishes the x with "valueX"
        x = valueX;
    }
    int  GetY() { 
        return y;
    }
    void SetY(int y) { // method that establishes the y with "this"
        this -> y = y;
    }
    void Print() { 
        cout << "X = " << x << "\t Y = " << y << endl << endl;
    }
};

int main() {
    Point a; 
    a.SetY(5);
    a.Print();

    Point b(4, 17);
    b.Print();

    return 0;
}
