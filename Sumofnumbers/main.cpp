#include <iostream>

using namespace std;
int sum(int);
int main()
{
int num=0;
do
{
    cout << "Enter the limit upto which sum is to be find : " << flush;
    cin >> num;
    cout << "The sum upto " << num << " number is : " << sum(num) <<endl;
    }while(num != 0);
    return 0;
}
int sum(int a)
{
if(a-1>0)
return (a + sum(a-1));
}
