#include<iostream>
using namespace std;

int main ()
{
	char ch;
	cin>>ch;

	if (ch>=65 && ch<=90)
		cout<<"ALPHA \nIS CAPITAL";

    else if (ch>=97 && ch<=122)
		cout<<"ALPHA \nIS SMALL";

	else if (ch>=48 && ch<=57)
		cout<<"IS DIGIT";
	else if ((ch>0 && ch<=47)||(ch>=58 && ch<=64)||
               (ch>=91 && ch<=96)||(ch>=123 && ch<=127))
		cout<<"IS SPECIAL SYMBOL";


	return 0;
}
