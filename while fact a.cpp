#include <iostream>
using namespace std;
int factl(int n);//fn declaration
int main(int argc, char** argv)
{
	int a=7;
	cout<<"factorial="<<factl(a)<<endl;
	return 0;
}
int factl(int n)//fn definition
{
	int ans=1;
	while(n>1)
	{
		ans*=n;
		n--;
			
	}
	
	return ans;
}