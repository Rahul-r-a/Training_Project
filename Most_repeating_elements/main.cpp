#include <iostream>

using namespace std;

int main()
{
int arr[] = {1,2,4,3,2,5,7,6,8,4,3,5,9,3,4,2,3,5,6,4,3};
int size=0, i=0, j=0, count=0, maxcount=0, maxoccur=0;
size = sizeof(arr)/sizeof(arr[0]);
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]==arr[j])
{
count ++;
}
}
if(count>maxcount)
{
maxcount = count;
maxoccur = arr[i];
}
count=1;
}
cout << "Maximum occuring element is : " << maxoccur << endl << "Maximum count is : " << maxcount << endl;
    return 0;
}
