#include <iostream>
#include"calc.h"

using namespace std;

/*int num1=0, num2=0;
char choice=0;
string text1 = "Enter the first number";
string text2 = "Enter the second number";*/

int main()
{
	char choice=0;

   
    while(choice !='Q')
    {
        menu();

	cout << "enter a choice for mathematical operation : " << flush;
        cin >> choice;
        cout <<"\n";
        
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



