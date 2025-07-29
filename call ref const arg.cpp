#include <iostream>
using namespace std;
int shout(const int &n,string &p);//fn declaration
int main(int argc, char** argv)
{
	int a=7;
	string b="Mimah";
	cout<<"Function done"<<shout(a,b)<<endl;//call
	cout<<"value of a="<<a<<endl;
	
}
int shout(const int &n,string &p)//fn definition
{
	for(int i=0;i<n;i++)
	{
	cout<<"Hey "<<p<<"\n";
	}
	return n;
}