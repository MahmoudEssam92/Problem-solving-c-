#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long m,n,i, sum=0;
    while(cin>>m>>n){
        if (m<=0 || n<=0){
            return 0;
        }

        if (n>=m){
            for (i = m; i<=n; i++){
                sum += i;
                cout <<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
            sum =0;
    }
        if (m>=n){
            for (i = n; i<=m; i++){
                sum += i;
                cout <<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
            sum=0;
    }
        }

    return 0;
}
