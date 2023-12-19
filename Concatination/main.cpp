#include <iostream>

using namespace std;

int main()
{
string text1, text2;
cout << "Enter the two strings : " << flush;
cin >> text1 >> text2;
    cout << text1.append(text2) << endl; // OR BY (TEXT1+TEXT2) CAN ALSO BE DONE
    // Differance is that .append is faster and use only less cpu cycle
    return 0;
}
