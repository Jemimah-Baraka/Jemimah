#include <iostream>
using namespace std;
int findMax(int a, int b);

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;


    int result = findMax(a, b);


    cout << "The maximum number is: " << result << endl;

    return 0;
}

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}