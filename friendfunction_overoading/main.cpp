#include <iostream>

using namespace std;
class person
{
private :
         int weight;
public :
        person(int num=0)
        {
        weight=num;
        }
        friend bool operator>(person x, person y);                //We are using bool since it s if ie true or false operation is considered. so we overload the > and < operator
        friend bool operator<(person x, person y);

};
bool operator>(person x, person y)
{
return x.weight>y.weight;
}
bool operator<(person x, person y)
{
return x.weight < y.weight;
}
int main()
{
int w1=0, w2=0;
    cout << "Enter the weight of person 1 : " << flush;
    cin >> w1;
    cout << "Enter the weight of person 2 : " << flush;
    cin >> w2;
    person rahul(w1);
    person arun(w2);
    if(rahul>arun)
    {
    cout << "\nRahul is heavy" << endl;
    }
    else if(rahul<arun)
    {
    cout << "Arun is heavy by " << w2-w1 << " of weight" << endl;
    }
    return 0;
}
