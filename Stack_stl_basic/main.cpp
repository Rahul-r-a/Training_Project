#include <iostream>

using namespace std;
#define SIZE 50
class stack
{
private :
         int stackarr[SIZE];
         int var;
public :
        stack()
        {
        var=0;
        }

        void push(int num)
        {
        if(var<SIZE)
        {
        stackarr[var++]=num;
        }
        else
        cout << "Stack overflow" << endl;
        }

        int pop()
        {
        if(var==0)
        cout << "Stack underflow" << endl;
        else
        return stackarr[--var];
        }
       void set(int num)
        {
        var=num;
        }
};
int main()
{
int i=0;
    stack s1;
    for(i=0;i<SIZE;i++)
    {
    s1.push(i);
    }
    for(i=0;i<SIZE;i++)
    {
    cout << s1.pop() <<"  ";
    }
    return 0;
}
