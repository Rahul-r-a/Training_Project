/*"Given two strings s and t , return true if t is an anagram of s , and
false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a

different word or phrase, typically using all the original letters exactly once"*/

#include <iostream>
using namespace std;
int main()
{
    int s1size = 0, s2size = 0, count = 0;
    int i = 0, j = 0;
    string s1, s2;
    cout << "Enter the first string : " << flush;
    getline(cin, s1);
    cout << endl;
    cout << "Enter the second string : " << flush;
    getline(cin, s2);
    cout << endl;

    s1size = s1.size();
    s2size = s2.size();
    if (s1size == s2size)
    {
        for (i = 0; i < s1size; i++)
        {
            for (j = 0; j < s2size; j++)
            {
                if (s1[i] == s2[i])
                {
                    count++;
                }
            }
        }
        cout << endl;
        if (count == s1size)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
