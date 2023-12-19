#include<iostream>
using namespace std;
class alpha
{
    private :
             int a;
             int b;
    public :
            alpha()
            {
                a=5;
                b=5;
            }
            static int stat;
            static int getstat()
            {
            stat++;
            return stat;
            }
};
int alpha::stat=0;
int main()
{
    alpha a1;
    cout << a1.getstat() << endl;           //calling static function starting
    cout << alpha::getstat() << endl;        // when called via class also again incrementing
    cout << a1.getstat() << endl;             //Again when called function the static variable isincrementing
    return 0;
}
