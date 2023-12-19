#include <iostream>

using namespace std;

int main()
{
    int count=0, i=0, j=0, flag=0;
   string inp, outp;
   cout << " enter the string to check for palindrome : " << endl;
   cin >> inp;
   //cout <<inp;
   while(inp[i] !='\0')
   {
       count++;
       i++;
   }
   //outp = inp;
    //cout << outp<< endl;
    cout << "\n";
   for(i=count-1,j=0;i>=0,j<count;j++,i--)
   {
        outp[j]=inp[i];
        //cout << outp[j];
   }
    
   //cout << inp << endl;
   for(i=0;i<count;i++)
   {
   if(inp[i] == outp[i])
   {
       flag++;
   }
   }
   if(count==flag)
   {
       cout << " the word is palindrome"<<endl;
   }
   else
   {
       cout << " the word is not palindrome"<<endl;
   }
   return 0;
   }

