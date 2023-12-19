#include <iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int>set1 = {10,20,40,10,25,35};              //Declaring and Initializing set
    for(auto i:set1)
    {
    cout << "Value : " << i << endl;             //output will be sorted and will also print repeating values
    }
    set1.insert(9);

    cout << "\nvalue after insertion" << endl;
    for(multiset<int>::iterator i = set1.begin();i!=set1.end();i++)
    {
    cout << "Value : " << *i << endl;             //output will be sorted and will also print the repeating values
    }

    //ERASING
    set1.erase(set1.find(20),set1.find(25));              //Erasing till range(giving values of set inside the find function
    cout << "\nvalue after erasing" << endl;
    for(multiset<int>::iterator i = set1.begin();i!=set1.end();i++)
    {
    cout << "Value : " << *i << endl;             //output will be sorted and will also print the repeating values
    }

    return 0;
}
