#include<iostream>
using namespace std;

    class Distance{
        private:
        int feet;
        int inch;
        public:
        {
            void getDistance(){
            cout<<"Enter feet";
            cin>>feet;
            cout<<"enter inch";
            cin>>inch;
        }
        }
        void show{
            cout<<feet<<"inch"<<inch;

        }
    };
   int main(){
    Distance d;
d.getDistance();
d.show();
Distance*dptr;

   } 
}