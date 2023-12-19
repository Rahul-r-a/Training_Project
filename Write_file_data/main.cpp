#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;                             // creating output stream iwith object fout

    fout.open("my.txt");                      //creating and loading a file in RAM
if(fout)
cout << "FIle opened" << endl;
else
cout << "File not opened" << endl;
    fout << "HI my name is Rahul";               //Writing data into file

    fout.close();                              //Closing the file
    return 0;
}
