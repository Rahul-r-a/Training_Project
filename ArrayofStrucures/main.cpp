#include <iostream>

using namespace std;
struct student // here person is a datatype in which we can use
{
string name;
int rollno;
int percent;
};
int main()
{
int i=0;
char choice;
student stud[3];
do
{
cout << "Enter a choice" << endl << "***************" << endl;
cout << "w- Write the data \nr- Read the data \ne-Edit the data \nq-Quit : " << flush;
cin >> choice;
cout << endl;
if(choice == 'w')
{
for(i=0;i<sizeof(stud)/sizeof(stud[0]);i++)
{
cout << "Enter details of " << i+1 << "th student" << endl;
cout << "Enter the name : " << flush;
cin >> stud[i].name;
cout << "Enter the roll no : " << flush;
cin >> stud[i].rollno;
cout << "Enter the percentage : " << flush;
cin >> stud[i].percent;
cout << endl;
}
}
else if(choice=='r')
{
cout << "Enter the index number to see the details : " << flush;
int index;
cin >> index;
if(index<=3)
{
cout << "Name : " <<stud[index-1].name << endl;
cout << "RollNo : " << stud[index-1].rollno << endl;
cout << "Percentage : " << stud[index-1].percent << endl;
cout << endl;
}
else
cout << "Wrong index number entered" << endl << "Try index from : (1-" << sizeof(stud)/sizeof(stud[0]) << ")" << endl;
}
}while(choice != 'q');
    return 0;
}
