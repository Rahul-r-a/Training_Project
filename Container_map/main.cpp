#include <iostream>
#include<map>                  //some ide should use string header
using namespace std;

int main()
{
    std::map<int,string>map1;      //Declaring map container(map=classname, int=keytype, string=valuetype, map1=mapname)

     std::map<int,string>map2 = {{100,"Rahul"},{101,"Arun"},{105,"Akshay"}};
 cout << "\nValues in map : " << endl;
     for(map<int,string>::iterator i = map2.begin();i != map2.end();i++)
    {
    cout << i->first << " : ";                     //for printing the key value using pointer i
    cout << i->second << endl;                   //for prnting the names
    }

    //METHODS
    //1.CHANGING VALUES IN MAP
    map2[100] = "Babu";
    map2.at(101) = "Deepa";

    cout << "\nValues in map after changing : " << endl;
     for(map<int,string>::iterator i = map2.begin();i != map2.end();i++)
     {
       cout << (*i).first << " : ";                     //for printing the key value using pointer i (since it is taking address of the map we have to dereference it)
       cout << i->second << endl;                   //for prnting the names
     }

     //2.ACCESSING VALUES IN MAP
     cout << "\nValue printing by at(101) : " << map2.at(101) << endl;
     cout << "\nValue printing by [101] : " << map2[101] << endl;

     //3.INSERTION OF VALUES
     map2.insert(make_pair(102,"Thakku"));
     map2.insert(pair<int,string>(103,"Sathya"));         //Insertion type 1
     map2.insert(make_pair(104,"Nisha"));                //Insertion type 3

     cout << "\nValues in map after insertion : " << endl;
     for(map<int,string>::iterator i = map2.begin();i != map2.end();i++)
     {
       cout << i->first << " : ";                     //for printing the key value using pointer i
       cout << i->second << endl;                   //for prnting the names
     }

    //4.ERASING
    map<int,string>::iterator i = map2.begin();
    map2.erase(i);
    cout << "\nValues in map after erasing : " << endl;
     for(map<int,string>::iterator i = map2.begin();i != map2.end();i++)
     {
       cout << i->first << " : ";                     //Value at POINTER I got deleted
       cout << i->second << endl;
     }

     //ERASING TYPE 2(both key and value erased)
     auto j = map2.find(103);                           //USING Auto for iterating
     map2.erase(j);
     cout << "\nValues in map after erasing : " << endl;
     for(map<int,string>::iterator i = map2.begin();i != map2.end();i++)
     {
       cout << i->first << " : ";                     //Value at 105 got deleted
       cout << i->second << endl;
     }


    return 0;
    }
