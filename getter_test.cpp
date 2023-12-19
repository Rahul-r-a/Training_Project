#include <iostream>
#include<sstream>

using namespace std;

class dance
{
    private :
             string name;
             int age;
    public :
             //void style();
             dance();
             dance(string newname, int newage);
	     string tostring();
             ~dance();
};

stringstream ss;

int main()
{
    cout << "starting the programme" << endl;
    cout << "**********************\n" << endl;
    dance person;
    dance person2("arun",24);
    cout << person.tostring();
   // cout <<person2.name << " " << person2.age << endl;
    cout << person2.tostring() << endl;
    cout << "\n*******************" << endl;
    cout << "Ending the programe" << endl;

    return 0;
}
dance::dance()
{
    cout << "dance class created" << endl;
    name = "rahul";
    age = 23;
}
dance::~dance()
{
    cout << "\nclass destroyed" << endl;
    cout << "memmory deallocated" << endl;
}

string dance::tostring()
{
	ss.str("");
    ss << "Name : ";
    ss << name;
    ss << " ; Age : ";
    ss << age;
    ss << "\n";
    string info;
    info = ss.str();
    
    return ss.str();
}
dance::dance(string newname, int newage)
{
    name = newname;
    age = newage;
}

