#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n,s,s2, i,z, i2,z2;
    cin>>n;
    s = n - 1;
    for (i=1; i<=n; i++){
        for (z=1;z<=s; z++){
        cout<<" ";

        }
        for (int x=1; x< i*2; x++){
            cout << "*";
        }
        s--;
        cout<<endl;
    }
    s =1;


    for (i=n; i>=1; i--){
        for (z=1;z<s; z++){
        cout<<" ";

        }
        for (int x=i*2; x>1; x--){
            cout << "*";
        }

        cout<<endl;
        s++;
    }
}
