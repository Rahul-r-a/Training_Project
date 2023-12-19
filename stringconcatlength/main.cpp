#include <iostream>

using namespace std;

int main()
{
string text1, text2;
cout << "Enter the two strings : " << flush;
cin >> text1 >> text2;
    string concat;
    concat = text1.append(text2);
    cout << "Length of string after concatination is : " << concat.length() << endl;
    return 0;
}
