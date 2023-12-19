#include <iostream>

using namespace std;

int main()
{
int size=0, i=0;
    cout << "Enter the size of the array : " << flush;
    cin >> size;
    int arr[size], temp[size];
    cout << "enter the numbers into athe array : " << flush;
    for(i=0;i<size;i++)
    {
    cin >> arr[i];
    }
    for(i=0;i<size-1;i++)
    {
    for(int j=i+1;j<size;j++)
    {
    if(arr[i]>arr[j])
    {
    temp[i]=arr[i];
    arr[i] = arr[j];
    arr[j] = temp[i];
    }
    }
    }
    cout << arr[0] << " : is the smallest number in the array" << endl;
    return 0;
}
