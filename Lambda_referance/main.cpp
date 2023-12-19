#include <iostream>
#include<array>
using namespace std;

int main()
{
int arr[] = {2,4,6,8,10} ;
auto sum = [&arr]()->int
{
int total = 0;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
{
total = total + arr[i];
}
return total;
};
cout << "Sum of array is : " << sum() << endl;
    return 0;
}
