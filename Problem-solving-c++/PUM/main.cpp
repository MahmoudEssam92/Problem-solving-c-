#include <iostream>

using namespace std;

int main()
{
    long long n,i,z,c=1,counter = 1;
    cin>>n;
    for (i =1; i<=n; i++){
        c= c+4;
        for (z =1; z<=3; z++){
            cout<<counter++<<" ";
        }
        cout<<"PUM"<<endl;
        counter=c;
    }
    return 0;
}
