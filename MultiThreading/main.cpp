#include <iostream>
#include<thread>                         //header for multithreading
using namespace std;
void threadfun1(int start, int end)
{
for(int i=start;i<=end;i++)
{
cout << "Hello" <<endl;
}
}
void threadfun2(int start, int end)
{
for(int i=start;i<=end;i++)
{
cout << "Hi" << endl;
}
}
int main()
{
clock_t start, end;                           //creating clock_t class to understand how much time taken, ie it returns the
start = clock();                              //calling the class functtion to store the cpu starting time in the start variable

   // threadfun1(1, 25000);                       //TRADITIONAL WAY OF THREADING, IT TAKES TIME
    //threadfun2(25001, 50000);

//PASSING A FUNCTION TO THREAD
  thread funtest1(threadfun1, 1, 25000);                   //created a class thread and passing the function
  thread funtest2(threadfun2, 25001, 50000);

  funtest1.join();                               //Inorder to execute the function we use join function
  funtest2.join();                                //Waiting for the thread to finish


    end = clock();                          //calling clock function after executing adn storing it to end variable

    double totaltime = (end - start) / double(CLOCKS_PER_SEC);       //To get the number of seconds used by the CPU, we have to divide by CLOCKS_PER_SEC,
     cout << "Total time taken : " << totaltime;
     cout << endl << CLOCKS_PER_SEC;
    return 0;
}
