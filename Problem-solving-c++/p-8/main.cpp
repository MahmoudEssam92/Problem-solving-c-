#include <iostream>
using namespace std;

int main()
{
   char ch, chee;
   cin>>ch;
   if (ch == tolower(ch)){
    chee=ch-32;
    cout<<chee;
   }
   else{
    chee=ch+32;
    cout<<chee;
   }
   return 0;
}
