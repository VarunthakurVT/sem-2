//to add two english numbers....

#include <iostream>
using namespace std;
class Distance
{
    private :
    int feet;
    float inch;

    public:
    Distance ()
    {
        feet=0; inch=0;
    }
    Distance(int f, float i)
    {
        feet = f; inch = i;
    }
    void getData()
    {
        cout<<"\n Enterr Feet : ";
        cin>>feet;
        cout<<"\n Enter inch : ";
        cin>>inch;
    }

    void show(){
        cout<<endl<<feet<<"\',"<<inch<<"\''";
    }
    Distance operator * (Distance d2)
    {

        Distance d;
        d.feet= feet * d2.feet;
        d.inch = inch * d2.inch;
        while(d.inch>=12){
            d.inch-=12;
            d.feet++;
        }
        return d;
    }

};

int main()
{
    Distance d1,d2,d3,d4;
    d1.getData();
    d2.getData();
    d3=d1*d2;
    // d4=d1+d2+d3;
    d1.show();
    d2.show();
    d3.show();
    // d4.show();
}