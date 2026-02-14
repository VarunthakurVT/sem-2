#include<iostream>
#include<string>
using namespace std;
class Counter
{
    private:
    int count;
    public:
    Counter(){
        count=0;
    }
    
    
    Counter(int c){
    count=c;}
    Counter operator ++(){
        count++;
        return 0;
    }
    Counter operator --(){
        count --;
        return count;
    }
void show(){
    cout<<endl<<count;
}
};
int main(){
    Counter c1(5);
    ++c1;
    c1.show();
    ++c1;
    c1.show();
    --c1;
     c1.show();
    return 0;
}