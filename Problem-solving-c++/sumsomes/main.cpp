#include <iostream>

using namespace std;

int main()
{
    long long n,i, range,s1, s2;

    cin>>n;
    s1 = 0;
    s2 = 1;
    if (n==1){
        cout<<s1<<endl;
    }
    else if (n==2){
        cout<<s1<<" "<<s2<<endl;

    }
    else{
        cout<< s1<<" "<<s2<<" ";

        for (i =2; i<n; i++){
            int result = s1 + s2;
            cout<<result<<" ";
            s1 = s2;
            s2 = result;
        }

    }

    return 0;
}
