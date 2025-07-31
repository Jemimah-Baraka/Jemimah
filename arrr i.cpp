#include <iostream>
using namespace std;
int main()
{
	int num[5];
	
		cout<<"Enter numbers"<<endl;
		int i,sum=0;
	for(i=0;i<5;i++)
	{
		cin>>num[i];
	sum+=num[5];
	}
	
	cout<<"Average is:\n"<<sum/5;
}