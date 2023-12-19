#include<iostream>
#include"ptr_bsc.h"
using namespace std;
int main()
{
	//int value=10;
	double *ptr;
	//cout << "the value of variable is : " <<  *ptr << endl;
       // cout << "the address of the variable is : " << ptr << endl;	
        
//	cout << "\n" << endl;
        double val = 123.4;
	ptr = &val;
      cout << " the value of variable val is : " << val << endl;
      num(ptr);
      cout << " the value of variable val is : " << val << endl;
	return 0;
}

