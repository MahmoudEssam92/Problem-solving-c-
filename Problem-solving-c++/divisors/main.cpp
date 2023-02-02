#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n1,i, n2,GCD;
    cin >>n1>>n2;
    if (n1>n2){
        long long temp = n2;
        n2 = n1;
        n1 = temp;
    }
    for (i=1; i<=n1; i++){
        if (n1 %i ==0 && n2%i ==0){
            GCD = i;
        }

    }
    cout<<GCD<<endl;


    return 0;
}
