#include <iostream>

using namespace std;
void amstrong(int);
int main()
{
int num=0;
    cout << "Enter the number to check : " << flush;
    cin >> num;
    amstrong(num);
    return 0;
}
inline void amstrong(int a)
{
int sum=0, rem=0, i=10;
int num;
num=a;
while(a != 0)
{
rem = a%10;
a=a/10;
sum = sum + (rem*rem*rem);
}
if(sum==num)
cout << "The number is amstrong" << endl;
else
cout << "The number is not amstrong" << endl;
}
