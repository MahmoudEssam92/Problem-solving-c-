#include <iostream>

using namespace std;

int main()
{
    long long i,n;
    cin>>n;
    for (i =1; i<=n; i++){
        for (long long z = 1; z<=i; z++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

