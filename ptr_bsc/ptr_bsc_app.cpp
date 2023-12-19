#include<iostream>
#include"ptr_bsc.h"
 using namespace std;

 void num(double *dval)
{
        cout << " the address of variable val in function is : " << dval << endl;
         *dval = 10;
        cout << "the value of variable val in function is : " << *dval << endl;
}

