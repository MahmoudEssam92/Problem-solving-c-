#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin>>n;
    for (i=1; i<=n;i++){
        int A,B,C;
        cin>> A>>B>>C;
        if(A == B+C){
            cout<< "YES"<<endl;
        }
        else if(C == B+A){
            cout<<"YES"<<endl;

        }
        else if(B == A+C){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
