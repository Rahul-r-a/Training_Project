#include <iostream>

using namespace std;

int main()
{
string firstname;
string lastname;
string address;
    cout << "Enter the address : " << flush; // IS given first otherwise getline wil take the space after other details as input and will not ive proper output
    getline(cin,address);
    cout << "Enter the first name : " << flush;
    cin >> firstname;
    cout << "Enter the last name : " << flush;
    cin >> lastname;

    cout << "Detaisl of yours" << endl;
    cout << "****************" << endl;
    cout << "Fullname : " << firstname+ " " +lastname << endl;
    cout << "Address : " << address << endl;
    return 0;
}
