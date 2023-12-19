#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream fin;
    fin.open("my.txt");
    int pos;
    pos = fin.tellg();
    cout << pos << endl;
    fin >> ch;                //moving the get pointer to next charecter
    cout <<pos << endl;
    fin.close();
    return 0;
}
