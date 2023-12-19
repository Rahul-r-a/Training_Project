/*Write a programme showing atm functionalities in oops
1.Check Balance
2.Cash Withdrawal
3.User Details
4.Update mobile no*/
#include <iostream>
using namespace std;
int oldpin=0, newpin=0, cnfrmpin=0;
 long int oldno=0, newno=0, cnfrmno=0;
int opt=0, flag=0;
class ATM
{
private:
double balance;
string name;
int pin;
long int mobile;
long int accountno;

public :
void setdata(string Name, long int Mobile, long int Accountno, double Amount, int Pin)
{
    name=Name;
    balance=Amount;
    mobile=Mobile;
    accountno=Accountno;
    pin=Pin;
}
void withdrawal()
{

    double amount=0;int atmpin=0;
    do
    {
    cout << "\nEnter the amount to withdraw : " << flush;
    cin >> amount;
    if(amount>0 && amount<balance)
    {
    cout << "\nEnter your ATM pin : " << flush;
    cin >> atmpin;
    if(pin==atmpin || atmpin==newpin)
    {
    cout << "\nYour withdrawal is successfull" << endl << "Collect the amount now and withdraw your card" << endl;
    balance = balance-amount;
    cout << "\nYour Balance in account : " << balance << endl;
    break;
    }
    else
    cout << "\nYou entered wrong pin" << endl;
    }
    else
    {
    cout << "Withdrawal amount is beyond the limit" << endl;
    cout << "\nAmount you have in account : " << balance << endl;
    }
    }while(1);

}
long int getaccountno(long int num)
{
    if(accountno==num)
    return num;
}
void getbalance()
{
    cout << "Your balance is : " << balance << endl;
}
void details()
{
    cout << "Name : " << name << endl;
    cout << "MobileNo : " << mobile << endl;
    cout << "Balance : " << balance << endl;
    cout << "Account No : " << accountno << endl;

}
void updatedata()
{
cout << " \nSelect what to update\n" << endl;
cout << "1 - Update Mobile no \n2 - Update ATM pin : " << flush;
cin >> opt;

if(opt==2)
{
do
{
cout << "\nEnter the old pin : " << flush;
cin >> oldpin;
if(oldpin == pin)
{
cout << "\nEnter the new pin : " << flush;
cin >> newpin;
cout << "\nConfirm the new pin : " << flush;
cin >> cnfrmpin;
if(cnfrmpin==newpin)
{
cout << "\nYour pin number is updated" << endl;
break;
pin=newpin;
}
else
cout << "\nNew pin number not confirmed" << endl;
break;
}
else
cout << "\nWrong pin Entered"<< endl;
}while(1);
}
else if(opt==1)
{
do
{
cout << "\nEnter the old mobile number : " << flush;
cin >> oldno;
if(oldno == mobile)
{
cout << "\nEnter the new mobile number : " << flush;
cin >> newno;
cout << "\nConfirm the new mobile number : " << flush;
cin >> cnfrmno;
if(cnfrmno==newno)
{
cout << "\nYour mobile number is updated" << endl;
mobile=newno;
break;
}
else
cout << "\nNew mobile number not confirmed" << endl;
break;
}
else
cout << "\nWrong mobile number Entered"<< endl;
}while(1);
}
}
};

int main()
{
     ATM user1;
     user1.setdata("Rahul A",9447193397,1234567890,50000,29);
    long int accntno=0;
    cout << "\nWELCOME TO BANK ATM" << endl << "*********************\n" << endl;
int choice=0;
do
{
cout << "Enter your account number : " << flush;
cin >> accntno;
cout << endl;
if(user1.getaccountno(accntno)==accntno)
{
do
{
    cout << "Please Select an Option" << endl;
    cout << "1 - Check Balance \n2 - Cash Withdrawal \n3 - User Details \n4 - Update Mobile/Pin \n5 - Quit : " << flush;
    cin >> choice;
    cout << endl;
    if(choice == 4)
    {
     user1.updatedata();
     cout << endl;
    }
    else if(choice==3)
    {
        user1.details();
        cout << endl;
    }
    else if(choice==2)
    {
        user1.withdrawal();
        cout << endl;
    }
    else if(choice==1)
    {
        user1.getbalance();
        cout << endl;
    }
    else if (choice==5)
    {
        cout << "\nExiting ATM\n" << endl;
        exit(0);
    }
    else
    {
    cout << "\nEntered Wrong Input\n" << endl;
    }
}while(1);
}
else
{
cout << "\nNo user with this account number\n" << endl;
}
}while(1);
    return 0;
}
