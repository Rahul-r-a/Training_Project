/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int num1=0, num2=0;
char choice=0;
string text1 = "Enter the first number";
string text2 = "Enter the second number";

char menu();
int sum();
int subtraction();
int multiplication();
float division();

int main()
{
   
    while(choice !='q')
    {
        cout << "enter a choice for mathematical operation" <<endl;
        menu();
        
        if(choice == 'A')
        {
            sum();
        }
        else if(choice == 'S')
        {
           subtraction();
        }
        else if(choice == 'M')
        {
            multiplication();
        }
        else if(choice == 'D')
        {
            division();
        }
    }
     return 0;
}
char menu()
{
    cout << " A to add numbers" << endl;
    cout << " S to subtract numbers" << endl;
    cout << " M to multiply two numbers" << endl;
    cout << " D to divide two numbers" << endl;
    cin >> choice;
    return choice;
}

int sum()
{
     cout << text1 << endl;
     cin >> num1;
     cout << text2 << endl;
     cin >> num2;
     cout << "The result is = " << num1+num2 << endl;
     return 0;
}

int subtraction()
{
      cout << text1 << endl;
      cin >> num1;
      cout << text2 << endl;
      cin >> num2;
      if(num1<num2)
      {
          cout << "The result is = " << num2-num1 << endl;
          
      }
      else
      {
          cout << "The result is = " << num1-num2 << endl;
       }
       return 0;
}

int multiplication()
{
     cout << text1 << endl;
     cin >> num1;
     cout << text2 << endl;
     cin >> num2;
     cout << "The result is = " << num1*num2 << endl;
     return 0;
}

float division()
{
    cout << text1 << endl;
    cin >> num1;
    cout << text2 << endl;
    cin >> num2;
    cout << "The result is = " << num1/(float)num2 << endl;
    return 0;
}

