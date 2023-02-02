#include <iostream>

using namespace std;

int main()
{
    long long i, N;
    cin>>N;
    for (i=1; i<=N; i++){
        if (i%2 == 0){
            cout<<i<<endl;

        }
        else{
            continue;
        }
    }

    return 0;
}
