#include <iostream>

using namespace std;

int main()
{
    long long counter, Max,Min;
    cin>>counter;
    while (counter --){
        long long  i, n1, n2,sum=0;
        cin>>n1>>n2;
        if (n1>=n2){
            Max = n1;
            Min = n2;
        }
        else{
            Min = n1;
            Max = n2;
        }
        for (i=Min+1; i<=Max-1; i++){
            if (i % 2 !=0){
                sum+=i;
            }
            }
        cout<<sum<<endl;
        }

    return 0;
}
