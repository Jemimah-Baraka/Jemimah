#include <iostream>
using namespace std;
int main()
{
	int a,d,choice;
	cout<<"Choose two numbers:<<endl";
	cin>>a>>d;
	cout<<":The menu";
	cout<<"1:Add\n";
	cout<<"2:Subtract\n";
	cout<<"3:Divide\n";
	cout<<"4:Multiply\n";
	cout<<"5:Exit\n";
	 cout << "Enter your choice (1-5): ";
    cin >> choice;
	switch(choice)
	{
		case 1:cout<<"Addition of a and d is:"<<a+d<<endl;break;
		case 2:cout<<"Subtraction of a and d is:"<<a-d<<endl;break;
	 case 3:
            if (d == 0) {
                cout << "Error: Division by zero is not allowed!\n";
            } else {
                cout << "Division of a and d is:" << static_cast<double>(a) / d << endl;
            }
            break;
		case 4:cout<<"Multiplication of a and d is :"<<a*d<<endl;break;
		case 5:cout<<"exit"<<endl;break;
		default:cout<<"invalid choice";
	}
	return 0;
	
}