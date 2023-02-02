#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long years, months, days;

    cin>>days;

    years = days / 365;

    months = days % 365 / 30;

    days = days % 365 % 30;

    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;

 return 0;
}
