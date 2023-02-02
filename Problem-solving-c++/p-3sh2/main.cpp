#include <iostream>

using namespace std;

int main()
{
    long long N, i,number;
    cin>>N;
    long long negative =0, positive =0, odd =0,even = 0;
    for (i=1; i<=N; i++){
        cin>> number;
        if (number % 2 == 0){

            even++;

        }
        else{
            odd++;
        }
        if (number>0){
            positive++;
        }
        else if (number <0){
            negative++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}
