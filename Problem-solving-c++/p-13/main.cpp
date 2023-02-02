#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A,B,C;
    char Q, S;
    Q = '=';
    cin >> A >>S>>B>>Q>>C;
    if (S == '+'){
        if (C == A+B){
            cout <<"Yes";
        }
        else{
            cout << A+B;

        }

    }
    if (S == '*'){
        if (C == A*B){
            cout <<"Yes";
        }
        else{
            cout << A*B;

        }

    }
    if (S == '-'){
        if (C == A-B){
            cout <<"Yes";
        }
        else{
            cout << A-B;

        }

    }
    if (S == '/'){
        if (C == A/B){
            cout <<"Yes";
        }
        else{
            cout << A/B;

        }

    }
}
