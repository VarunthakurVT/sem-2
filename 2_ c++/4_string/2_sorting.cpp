 #include<iostream>
 using namespace std; 
 class Person{
    protected:
    char name[50];
    public:
    void setname(){
        cout<<"Enter name";
        cin>>name;
}
void print(){
    cout<<"\n name is: "<<name;

}
 };
 int main(){
    Person*pers[100];
    int n=0;
    char choice;
    do
    {
        pers[n]=new Person;
        pers[n]->setname();
        n++;
        cout<<"enter another name";
        cin>>choice;
    }
    while(choice=='y'){
        cout<<"\n Person Name :
    "
    }


 }