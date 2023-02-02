#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A,B,C,result_1,result_2,result_1m,result_2m;
    cin >> A >> B >> C;
    result_1 = fmax(A,B);
    result_2 = fmax(A,C);

    result_1m = fmin(A,B);
    result_2m = fmin(A,C);

    cout << fmin(result_1m, result_2m) << " "<< fmax(result_1, result_2) << endl;
    return 0;
}
