#include<iostream>
#include"app1.h"

 using namespace std;

cat::cat()                           //no need for datatype since constructor wont return anything
{
    cout << "cat created" <<endl;
    happy = true;
}

cat::~cat()                          //destructor is same as constructor but uses negation(~) additipnal
{
    cout << "cat destroyed" << endl;
}

void cat::speak()
{
    if(happy)
    {
        cout << "meaow" <<endl;
    }
    else
    {
        cout << "Sssss..." << endl;
    }
}
