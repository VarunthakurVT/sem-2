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
        cout << feet << " feet " << inch << " inches" << endl;
    }
    Distance Add(Distance d2) {
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
    Distance d1, d2(10, 5.5), d3;
    d1.getData();
    d3 = d1.Add(d2);
    d1.show();
    d2.show();
    d3.show();
    return 0;
}
