#include <iostream>
#include<fstream>
using namespace std;

int main()
{
   // ofstream fout;
    ifstream fin;                       //create only input stream
    char ch;                             // variable for storing GET pointer charecter

    fin.open("my.txt");                 //loading the file into the ram
    fin >> ch;                           //storing first get pointer value into ch variable
   // fout << "Hi may";

    while(!fin.eof())
    {
    cout << ch;                         //print the value at first index
    fin >> ch;                           //moving the get pointer
    }
    fin.close();                        //closing the file


    return 0;
}
