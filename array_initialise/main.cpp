#include <iostream>

using namespace std;

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << "Size of the array is : " << sizeof(arr) << endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
    cout << "Element " << i << "th index is : " << arr[i] << endl;
    }
    arr[4] = 100;
    cout << endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
    if(i==4)
    {
    cout << "Value at " << i << "th index is changed to : " << arr[i] << endl;
    continue;
    }
    cout << "Element " << i << "th index is : " << arr[i] << endl;
    }

    return 0;
}
