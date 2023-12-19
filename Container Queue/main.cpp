#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    cout << "front element : " << que.front() << endl;
    que.pop();
    cout <<"new front element : " << que.front() << endl;
    cout << " Back element : " << que.back() << endl;
    return 0;
}
