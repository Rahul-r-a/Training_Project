/*Traditional approach for operator overloading*/

#include <iostream>

using namespace std;
class A
{
private :
          float weight;
public :
          A(float Weight=0);
          A operator+(A w)                        //operator+ for adding two objects via overloading
       {
           A temp;
              temp.weight = weight + w.weight;
              return temp;
       }
          void print();
};
int main()
{
    A person1;
    A person2(23);
    A person3(47.89);
     person1.print();
     person2.print();
     person3.print();
     A total;
     total = person2 + person3;
     cout << "Total weight after adding two object " << flush;
     total.print();

    return 0;
}
A::A(float Weight)
{
    weight = Weight;
}
void A::print()
{
    cout << "Weight is : " << weight << endl;
}
