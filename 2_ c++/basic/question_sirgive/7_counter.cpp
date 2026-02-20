#include<iostream>
using namespace std; 
class Counter
{
    protected:
    int count;
    public:
    Counter()
    {count=0;}
    Counter(int c)
    {
        count=c;
    }
    int getcount()
    {return count;
    }
    Counter operator ++()
    {
        count++;
        return *this;
    }
};
class CountDN :public Counter
{
    public:
    Counter operator --()
    {
        count--;
        return *this;
    }
};
int main(){
    CountDN C1;
    cout<<C1.getcount()<<endl;
    ++C1;++C1;++C1;
    cout<<C1.getcount()<<endl;
    --C1;--C1;
    cout<<C1.getcount()<<endl;
    return 0;
}
