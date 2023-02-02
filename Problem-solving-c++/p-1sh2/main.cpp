#include <iostream>

using namespace std;

int main() {

    long long i, N;

    cin >> N;
    if (N>=2){
    for(i = 1; i <= N; i++) {
        if (i%2 ==0){
        cout << i << endl;
        }
    }
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}
