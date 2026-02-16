#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int f, float i) {
        feet = f;
        inch = i;
    }

    void getData() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }

    void show() {
        cout << feet << "' " << inch << "\""<< endl;
    }

    Distance Add(Distance d2) {  // Adds this (t1) + d2 (t2)
        Distance d;
        d.inch = inch + d2.inch;
        d.feet = feet + d2.feet;
        if (d.inch >= 12) {
            d.inch -= 12;
            d.feet++;
        }
        return d;
    }
};

int main() {
    Distance t1, t2(10, 5.5), sum;
    t1.getData();  // Input for t1
    sum = t1.Add(t2);  // sum = t1 + t2
    t1.show();
    t2.show();
    sum.show();
    return 0;
}
