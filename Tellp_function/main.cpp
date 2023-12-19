#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("my.txt", ios::app);
    int pos;
    pos = fout.tellp();
    cout << "Put pointer is at : " << pos << endl;
    fout << "Who are you";
    pos = fout.tellp();
    cout << "Put pointer is at : " << pos << endl;
    fout.close();

    return 0;
}
