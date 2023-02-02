#include<iostream>
using namespace std;


int main()
{
	int N,K;
	cin>>N >>K;
	if (N%2 == 0)
	{
		if (K<= N / 2)
		{
			cout <<2 * K - 1<<endl;
		}
		else cout << 2 * (K- N/2)<<endl;
	}
	else
	{
		if(K<=(N+1)/2){
			cout << 2 * K-1;
		}
		else cout <<2 * (K-(N+1)/2)<<endl;
	}
	return 0;
}
