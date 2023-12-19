#include <iostream>

using namespace std;

int main()
{
int row=0, column=0, i=0, j=0;
    cout << "Enter the number of rows needed : " << flush;
    cin >> row;
    cout << "Enter the coloumn needed : " << flush;
    cin >> column;
    int arr[row][column];
    cout << "Enter the numbers in the 2d array" << endl;
    for(i=0;i<row;i++)
    {
    for(j=0;j<column;j++)
    {
    cout << "row[" << i << "]" << "column[" << j << "] : " << flush;
    cin >> arr[i][j];
    }
    }
    cout << endl << "Value stored in the 2D arrays are : " << endl;
    for(i=0;i<row;i++)
    {
    for(j=0;j<column;j++)
    {
    cout << "row[" << i << "]" << "column[" << j << "] : " << flush;
    cout << arr[i][j] << endl;
    }
    }
    return 0;
}
