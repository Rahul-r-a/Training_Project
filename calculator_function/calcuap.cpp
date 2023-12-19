#include<iostream>
#include"calc.h"

using namespace std;

void menu()
{
    cout << " A to add numbers" << endl;
    cout << " S to subtract numbers" << endl;
    cout << " M to multiply two numbers" << endl;
    cout << " D to divide two numbers" << endl;
}

int sum()
{
	string text1 = "Enter the first number";
	string text2 = "Enter the second number";
	int num1=0, num2=0;
     cout << text1 << endl;
     cin >> num1;
     cout << text2 << endl;
     cin >> num2;
     cout << "The result is = " << num1+num2 << endl;
    // cout << "~~~~~~~~~~~~~~~~~~~~~~~" << end;
     return 0;
}
int subtraction()
{
	int num1=0, num2=0;
      string text1 = "Enter the first number";
      string text2 = "Enter the second number";
      cout << text1 << endl;
      cin >> num1;
      cout << text2 << endl;
      cin >> num2;
      if(num1<num2)
      {
          cout << "The result is = " << num2-num1 << endl;
	 // cout << "~~~~~~~~~~~~~~~~~~~~~~" << end;
      }
      else
      {
          cout << "The result is = " << num1-num2 << endl;
	//  cout << "~~~~~~~~~~~~~~~~~~~~~~" << end;
      }
       return 0;
}

int multiplication()
{
     int num1=0, num2=0;
     string text1 = "Enter the first number";
     string text2 = "Enter the second number";
     cout << text1 << endl;
     cin >> num1;
     cout << text2 << endl;
     cin >> num2;
     cout << "The result is = " << num1*num2 << endl;
    // cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << end;
     return 0;
}

float division()
{
	int num1=0, num2=0;
     string text1 = "Enter the first number";
     string text2 = "Enter the second number";
     cout << text1 << endl;
     cin >> num1;
     cout << text2 << endl;
     cin >> num2;
     cout << "The result is = " << num1/(float)num2 << endl;
    // cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << end;
     return 0;
}
