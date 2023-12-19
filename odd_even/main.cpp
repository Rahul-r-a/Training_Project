#include<iostream>
using namespace std;

int main()
{
int i=0;
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
    if (arr[i] % 2 == 0)
        cout << "The number at index [" << i << "] ie " << arr[i] << " is even" << endl;
    else
        cout << "The number at index [" << i <<"] ie " << arr[i] << " is odd" << endl;
        }
    return 0;
}
