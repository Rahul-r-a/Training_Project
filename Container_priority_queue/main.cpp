#include <iostream>
#include<queue>

using namespace std;

int main()
{
    //CReating max heap
    /*priority_queue<int>que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);

    cout << "Top element : " << que.top() << endl;            //since max heap root node will hav highest value
    cout << "size : " << que.size();
    que.pop();
    cout << " new Top element : " << que.top() << endl;*/

    //creating min heap
    priority_queue<int, vector<int>, greater<int>>que;
     que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
     cout << "Top element : " << que.top() << endl;            //since min heap root node will have smallest value
     cout << "size : " << que.size();
     que.pop();
     cout << " new Top element : " << que.top() << endl;


    return 0;
}
