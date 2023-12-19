#include <iostream>
#include<thread>
using namespace std;
//MULTI THREADING WITH LAMBDA FUNCTION
int main()
{
    //[]ARG->RETURNTYPE{ DEFINITION...}
    thread t1([] {std::cout << "Rahul";});
    thread t2([] {std::cout << " A";});

    if(t1.joinable())           //checking whether joinable;
    t1.join;
    if(t2.joinable())
    t2.join;
    return 0;
}
