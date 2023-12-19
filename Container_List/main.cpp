#include <iostream>
#include<list>
using namespace std;

int main()
{
    std::list<int>l1 = {5,20,30};;       //declaring a linked list (list=classname, int =  datatype, l1=listname)
    std::list<int>l2 = {29,34,10,56,25};    //Initialising list with values

    list<int>::iterator i=l2.begin();      //iterator pointer is pointed to the beginning element

    l2.insert(i,9);                        //9 inserted by insert function
      cout << "Values in list1 is : ";
    for(i=l1.begin();i!=l1.end();i++)
    {
    cout << *i << " ";                     //values printed after insertion
    }

    cout << endl;
    cout << "Values in list2 is : ";
    for(i=l2.begin();i!=l2.end();i++)
    {
    cout << *i << " ";                     //values printed after insertion
    }

    l2.push_back(24);
    cout << endl;
     cout << "Values in list after push is : ";
    for(i=l2.begin();i!=l2.end();i++)
    {
    cout << *i << " ";                     //values printed after pushback
    }
l2.pop_front();
cout << endl;
 cout << "Values in list after pop_front is : ";
    for(i=l2.begin();i!=l2.end();i++)
    {
    cout << *i << " ";                     //values printed after pop_front
    }


   l2.reverse();
   cout << endl;
    cout << "Values in list after reversing is : ";
    for(i=l2.begin();i!=l2.end();i++)
    {
    cout << *i << " ";                     //values printed after reversing
    }

    l2.sort();
    cout << endl;
    cout << "Values in list after sorting is : ";
    for(i=l2.begin();i!=l2.end();i++)
    {
    cout << *i << " ";                     //values printed after sorting
    }


    l2.merge(l1);
       cout << endl;
       cout << "Values in list after merging is : ";
       for(i=l2.begin();i!=l2.end();i++)
       {
        cout << *i << " ";                     //values printed after merging l1 to l2
       }

        return 0;

}
