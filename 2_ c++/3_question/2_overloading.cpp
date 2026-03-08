// overloading
#include<iostream>
using namespace std;

class Counter
{private:
int count;
public:
Counter()
{count = 0;}
Counter (int n)
{count = n;}
void getdata()
{cout<<"Enter start value:";
cin>>count;}
void show()
{cout<<endl<<count;}
Counter operator ++()
{++count;
return count;
}
// for decrement
Counter operator--()
{ --count;
return count;}
};

int main()
{Counter c1;
c1.getdata();
++c1;
c1.show();
--c1;
c1.show();
return 0 ;
}