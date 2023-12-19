/*Pre increment overloading operator*/

#include <iostream>

using namespace std;
class size
{
    private :
             int weight;
    public :
             size()
             {
                 weight=69;
             }
             size(float Weight)
             {
                 weight = Weight;
             }
             void operator++(int)             //only differenece is that additional argument of int is used in this funcion
             {
                 ++weight;
             }
             void print()
             {
                 cout << "Weight is : " << weight << endl;
             }
};
int main()
{
    size rahul;
    cout << "Before increment Rahul's " << flush;
    rahul.print();
    size arun(85);
    cout << "Before increment Arun's " << flush;
    arun.print();
    size akshay(65);
    cout << "Before increment Akshay's " << flush;
    akshay.print();
    rahul++;
    cout << "After increment Rahul's " << flush;
    rahul.print();
    arun++;
    cout << "After increment Arun's " << flush;
    arun.print();
    akshay++;
    cout << "After increment Akshay's " << flush;
    akshay.print();

    return 0;
}
