#include <iostream>
using namespace std;

int main()
{
string text1;
cout << "Enter the string input : " << flush;
getline(cin,text1);
string var1, var2;
cout << "Enter the words to be replaced : " << flush;
cin >> var1;
cout << "Enter the word to replace : " << flush;
cin >> var2;
while(text1.find(var1) != string::npos)           // searching the word to be replaced till end of the string
{
text1.replace(text1.find(var1), var1.length(),var2);   // replacing the word from word inputed by user
}
cout << text1 << endl;     // string after replacement
}
