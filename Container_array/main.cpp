#include <iostream>
#include<array>
using namespace std;

int main()
{
   // std::array<int,5>arr;                // array declaration (array=classname, int = datatype, 5= number of elements, arr=array name)

    std::array<int,5>arr = {1,2,3};   //array initialisation
    std::array<int,5>a = {9,8,7,6,5};

    cout << "size : " << arr.size() << endl;          //size of array upto filled
    cout << "Max size : " << arr.max_size() << endl;        //shows max size of the array

    cout << "At : " << arr.at(2) << endl;     //for accessing any element in the array using AT function : at(index numver)

    cout << "[] : " << arr[2] << endl;       //for accessing in traditional but unsafe

    cout << "front() : " << arr.front() << endl; // first element of array

    cout << "back() : " << arr.back() << endl;    //last element in the array

    for(auto i:a)
    {
    cout << "Values at indexes : " << i << endl;
    }
    a.sort();
    cout << "\nValues after sorting" << end;
    for(auto i:a)
    {
    cout << "Values at indexes : " << i << endl;
    }

    arr.fill(0);                               //filling the array with 0;
    cout << arr.at(3) << endl;

    cout << "\nValues after filling with zero" << endl;
    for(auto i:arr)
    {
    cout << "Values at indexes : " << i << endl;
    }

     arr.swap(a);                          //swapping two arrays
     cout << arr.at(3) << endl;

     a.swap(arr);
      arr.empty();                             //emptying the array
      cout << arr.at(1) << endl;



    return 0;
}
