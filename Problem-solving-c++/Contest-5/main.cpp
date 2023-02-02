#include<iostream>

using namespace std;

int main()

{

    int n;

    cin>>n;

    int x=0;

    string s1;

    string s2("++X");

    string s3("X++");

    string s4("--X");

    string s5("X--");

    for(int i=0;i<n;i++){


        cin>>s1;

        if(s1==s2||s1==s3)

        x=x+1;

        else

        x=x-1;

 }

    cout<<x;
}
