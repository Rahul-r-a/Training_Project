#include <iostream>

using namespace std;

int main()
{
    string msg = "Ignitarium-";

    //[] arg-> return type -> {definitions}
    auto sum = [msg](string a, string b)->string    // By using auto we can assign any value of any datatype to sum
    {
    return msg + a + " " + b;
    };
     //if  we add one more string as msg2 and gave = inside the [] and add the msg2 at the end of the function definition
     //ie(string msg2 = "text"
           //auto sum = [=](string a, string b)->string{ return msg + a + " " + b + msg2;}
           //output will be "Ignitarium Rahul A text"
    cout << sum("Rahul"," A") << endl;
    return 0;
}
