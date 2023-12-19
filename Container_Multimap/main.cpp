#include <iostream>
#include<map>                  //some ide should use string header
using namespace std;

int main()
{
    std::multimap<int,string>mmap1;      //Declaring map container(multimap=classname, int=keytype, string=valuetype, map1=mapname)

     std::multimap<int,string>mmap = {{100,"Rahul"},{101,"Arun"},{101,"Akshay"}};
 cout << "\nValues in map : " << endl;
     for(auto i:mmap)                        //using auto no need for conditions it will check for all the pair automatically
    {
    cout << i.first << " : ";                     //for printing the key value using pointer i
    cout << i.second << endl;                   //for prnting the names
    }

    //mmap[101] = "sdkma";                       //Altering cannot be done
    mmap.insert(make_pair(101,"Babu"));
    mmap.insert(pair<int,string>(101,"Deepa"));


    cout << "\n Values after insertion : " << endl;
     for(auto i :mmap)                        //using auto no need for conditions it will check for all the pair automatically
    {
    cout << i.first << " : ";                     //for printing the key value using pointer i
    cout << i.second << endl;                   //for prnting the names
    }

    cout << "\n" << endl;
    cout << "Accessing values by key and iterating" << endl;
    auto k=mmap.find(101);
    cout<<k->first << " : " <<k->second << endl;
    k++;                                           //for 1 iterations
    cout<<k->first << " : " <<k->second << endl;
    advance(k,2);                                             //For nth iteration use advance(k,n)
    cout<<k->first << " : " <<k->second << endl;

    //SIZE OF MULTIMAP
    cout << "\n Size of multimap : " << mmap.size() << endl;

    //ERASING
    auto j = mmap.find(101);
    mmap.erase(j);

      cout << "\n Values after erasing : " << endl;
     for(auto i :mmap)                        //using auto no need for conditions it will check for all the pair automatically
    {
    cout << i.first << " : ";                     //for printing the key value using pointer i
    cout << i.second << endl;                   //for prnting the names
    }

     //CLEARING THE MULTIMAP
      mmap.clear();                                //CLearing the multimap
      cout << "\n clearing multimap : " << endl;
     for(auto i :mmap)                        //using auto no need for conditions it will check for all the pair automatically
    {
    cout << i.first << " : ";                     //for printing the key value using pointer i
    cout << i.second << endl;                   //for prnting the names
    }
    return 0;
    }


