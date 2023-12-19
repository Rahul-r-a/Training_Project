#include<iostream>
#include"Class.h"

using namespace std;
 int main()
{
	Cat jim;
	jim.makehappy();
	jim.speak();
	jim.legs();

	Cat bob;
	bob.makesad();
	bob.speak();
	bob.legs();
	return 0;
}
