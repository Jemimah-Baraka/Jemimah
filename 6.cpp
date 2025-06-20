#include <iostream>
using namespace std;

int main() {
    int a,b,i;
    
    cout << "Enter integer : ";
    cin >> a ;
    cout << "Enter integer : ";
    cin >> b ;
     for(i=1;i<100;i++)
	 {
	 	if(i%a==0&&i%b==0)
		 {
		 continue;	
		 }
		 if(i%a==0||i%b==0)
		 {
		 cout <<i<<" ";	
		 }
	 }
	 return 0;
}