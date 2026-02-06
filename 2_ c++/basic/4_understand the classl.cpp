#include<iostream>
using namespace std;
class car
{
    private:
    char model[20];
    float price;
    public:
    void showdata(){
   cout<<"model:"<<model<<endl;
   cout<<"Price:"<<price;
    }
    void getData(){
        cout<<"enter model:";
        cin>>model;
        cout<<"Enter price:";
        cin >> price;
    }
    };
    int main(){
        car c1,c2;//you can make by array to make this  and apply the loop 
        c1.getData();
        c2.getData();
        c1.showdata();
         c2.showdata();
  return 0;
    }
