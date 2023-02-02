#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long i,x,n, factorial;
    cin>>x;

    while (x--){

        cin>>n;
        factorial =1;
        for (i=1; i<=n;i++){
            factorial = factorial * i;
        }
        cout<<factorial<<endl;
    }




}
