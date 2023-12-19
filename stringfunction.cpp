#include <iostream>

using namespace std;

int main()
{
string text1;
string text2;
    cout << "Enter the first string : " << flush;
    getline(cin,text1);
    cout << "Enter the second string : " << flush;
    getline(cin,text2);
    char choice=0;
    do
    {
    cout << "Enter a choice" << endl << "**************\n" << endl;
    cout << "a-concatination \nb-comparison \nc-stringlength \nd-swapping two strings \ne- reverse strings \nf- deleting vovels \nq-quit : " << flush;
    cin >> choice;
    if(choice=='a')
    {
    cout << endl << "Concatinated string is : " << text1.append(text2) << endl << endl;
    }
    else if(choice=='b')
    {
    if(text1.compare(text2)==0)
    cout << endl << "The strings are same\n" << endl;
    else
    cout << endl << "The strings are not same\n" << endl;
    }
    else if(choice=='c')
    {
    cout << endl << "String1 length is : " << text1.length() << endl;
    cout << "String2 length is : " << text2.length() << endl;
    }
    else if(choice=='d')
    {
    text1.swap(text2);
    cout << endl << "The swapped strings are" << endl << "******************" <<endl;
    cout << "first string : " << text1 << endl;
    cout << "second string : " << text2 << endl;
    }
    else if (choice=='e')
    {
    int l1=0, l2=0, i=0;
    l1 = text1.length();
    l2 = text2.length();
    for(i=l1;i>=0;i--)
    {
    cout << text1[i];
    }
    cout << " : is the reverse of string1" << endl;
    for(i=l2;i>=0;i--)
    {
    cout << text2[i];
    }
    cout << " : is the reverse of sting2" << endl;
    }
    else if(choice=='f')
    {
     int l1=0, l2=0, i=0;
    l1 = text1.length();
    l2 = text2.length();
    for(i=0;i<l1;i++)
    {
    if(text1[i]== 'a' || text1[i]== 'e' || text1[i]== 'i' || text1[i]== 'o' || text1[i]== 'u')
    {
    text1[i] = ' ';
    }
    }
    for(i=0;i<l2;i++)
    {
    if(text2[i]== 'a' || text2[i]== 'e' || text2[i]== 'i' || text2[i]== 'o' || text2[i]== 'u')
    {
    text2[i] = ' ';
    }
    }
    cout << endl << " string1 after deletion of vovels : " << text1 << endl;
    cout << endl << " string2 after deletion of vovels : " << text2 << endl;
    }
    }while(choice !='q');
    return 0;
}

