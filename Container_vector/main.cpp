//vector is a dynamic array, size can be increased according to the requirement
#include <iostream>
#include<vector>                      //container vector header
using namespace std;

int main()
{
    std::vector<int>v1;                  //declaring a vector container(vector=classname, int=datatype, v1=vectorname)
                                         //since it is dynamic array there is no need for declaring size, default size=0
    cout << "Size initial : " << v1.size() << endl;           //default size will be 0

    std::vector<int>v2 = {1,2,3,4,5};
    cout << "Size after initialisation : " << v2.size() << endl;

    cout <<"at : " << v2.at(2) << endl;          //value at index 2 = 3

    v2.push_back(6);                //push_back function is used to put the value at the back of the function
    cout << v2.at(5) << endl;
    cout << "Values in the vector : ";
   for(vector<int>::iterator i=v2.begin();i!=v2.end();i++)            //iterator is pointer to the container( iterator i=> i is the pinter)
   {
   cout << *i << " ";                                           //i is the iterator pointer
   }
   v2.pop_back();                                                //popping out the last element
   cout << endl;
   cout << "Values after pop_back : ";
    for(vector<int>::iterator i=v2.begin();i!=v2.end();i++)
   {
   cout << *i << " ";                                           //values printed after popback(6 will be popped out
   }

   //INSERT FUNCTION
   int num=9;
   vector<int>::iterator i = v2.begin();
   v2.insert(i,num);                                            //insert function take iterator i and number num as argument
   cout << endl;
   cout << "values after insertion : ";
    for(vector<int>::iterator i=v2.begin();i!=v2.end();i++)
   {
   cout << *i << " ";                                           //values printed after insertion(9 will be printed)
   }

   //ERASE THE ELEMENT IN THE VECTOR
    i = v2.begin();
   v2.erase(i);
   cout << endl;
   cout << "values after erasing : ";
    for(vector<int>::iterator i=v2.begin();i!=v2.end();i++)
   {
   cout << *i << " ";                                           //values printed after erasing(9 will be erased)
   }

   //CAPACITY OF VECTOR
   cout << endl << "Capacity of vector : " << v2.capacity() << endl;   //how many elements we can insert more into the vector
   i = v2.end();
   v2.insert(i,10);
   v2.insert(i,20);
   v2.insert(i,40);
   i = v2.begin();
   v2.insert(i,90);


   cout << endl;
   cout << "values after some more insertion: ";
    for(vector<int>::iterator i=v2.begin();i!=v2.end();i++)
    {
    cout << *i << " ";
    }
    return 0;
}
