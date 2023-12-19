/* "You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways
can you climb to the top?"*/

//The combination of pattern for climbing will be Fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int i=0, count=0, n=0; 

    cout << "Enter the number of steps to climb up : " << flush;
    cin >> n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(i=0;i<=n;i++)
    {
        if(i==0)
        {
            count=0;
        }
        else if(i==1)
        {
            count = 1;
        }
        else if(i==2)
        {
            count = 2;
        }
        else
        {
            arr[i] = arr[i-1] + arr[i-2];
            count = arr[i];
        }
    }
    cout << "The number of combinations for climbing " << n << " steps is : " << count << endl;


}
