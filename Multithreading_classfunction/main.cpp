#include <iostream>
#include<thread>             //header for threading
using namespace std;

//MULTITHREADING WITH CLASS FUNCTION
class test
{
public :
        void threadfun1(int start, int end)                 //first thread function
        {
        for(int i=start;i<end;i++)
        {
        cout << "HI" << endl;
        }
        }

        void threadfun2(int start, int end)                 //Second thread function
        {
        for(int i=start;i<end;i++)
        {
        cout << "Hello" << endl;
        }
        }
};
int main()
{
     test obj;               //object of test class is created

     thread th1(&test::threadfun1, &obj, 1, 50);            //Thread object
     thread th2(&test::threadfun2, &obj, 50, 100);

     th1.join();  //JOin function will start executing the thread and wait till the execution is completed
     th2.join();
    return 0;
}
