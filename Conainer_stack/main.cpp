#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>stck;               //Decalaring the stack(stack=classname, int =  datatype, stck=stackname)

    stck.push(20);                 //pushing elements into the stack
    stck.push(25);
    stck.push(30);
    stck.push(35);

    cout << "Top element : " << stck.top() << endl;
    stck.pop();
    cout << "new topmostr element : " << stck.top() << endl;

    cout << "Number of elements in the stack : " << stck.size() << endl;     //Size of stack

    return 0;
}
