#include <iostream>
#include<set>
using namespace std;

int main()
{
    set<int>set1 = {10,20,40,10,25,35};              //Declaring and Initializing set
    for(auto i:set1)
    {
    cout << "Value : " << i << endl;             //output will be sorted and removes the repeating values
    }
    set1.insert(9);

    cout << "\nvalue after insertion" << endl;
    for(set<int>::iterator i = set1.begin();i!=set1.end();i++)
    {
    cout << "Value : " << *i << endl;             //output will be sorted and removes the repeating values
    }
    return 0;
}
