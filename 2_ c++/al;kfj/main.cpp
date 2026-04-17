#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
using namespace std;

void append(string filename){
    ofstream file(filename, ios::app);
    if(!file)
    {
        cout<<"Error: could not open file\n";
        return;
    }
    else{
        string record;
        cout<<"Enter Record to add: ";
        getline(cin>>ws, record);
        file<<record<<endl;
        file.close();
        cout<<"Record added successfully\n";
    }
}

void findrecord(string filename){
    ifstream file(filename);
    if(!file){
        cout<<"Error: file does not exist\n";
        return;
    }
    
    string searchstring, line;
    bool found = false;
    int lineNumber = 0;
    
    cout<<"Enter Text to search: ";
    getline(cin>>ws, searchstring);
    
    while(getline(file, line)){
        lineNumber++;
        if(line.find(searchstring) != string::npos){
            cout<<"\nFound at line "<<lineNumber<<": "<<line<<endl;
            found = true;
            
            // Get next record
            if(getline(file, line)){
                cout<<"Next record: "<<line<<endl;
            }
            else{
                cout<<"No next record available\n";
            }
            break;
        }
    }
    
    if(!found){
        cout<<"Record not found!\n";
    }
    file.close();
}
void ListAll(string filename){
    ifstream file(filename);
    string line;
    if(!file){
        cout<<"File is empty or does not exist \n";
        return;}
        cout<<"..current Record ..";
        while(getline (file,line)){
            cout<<"_"<<line<<endl;
        }
        file.close();
    }


int main(){
    string filename = "records.txt";
    int choice;
    
    while(true){
        cout<<"\n--- File Record System ---\n";
        cout<<"1. Append Record\n";
        cout<<"2. Find Record and Show Next\n";
        cout<<"3. Exit\n";
        cout<<"4. Delete the file\n";
        cout<<"5 . list all file\n";
         cin.clear();
        cout<<"Enter your choice: ";
        cin>>choice;
    }
        
        switch(choice){
            case 1:
                append(filename);
                break;
            case 2:
                findrecord(filename);
                break;
            case 3:
                cout<<"Exiting...\n";
                break;
                return 0;
            case 5:
             ListAll(filename);
             break;
            default:
                cout<<"Invalid choice!\n";
                break;
        }
    
return 0;
}
