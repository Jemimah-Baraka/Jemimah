#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];
    int rollNo[5];
    int marks[5][3]; // 5 students, 3 subjects
    int total[5];
    float average[5];
    char grade[5];

    // Input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        
        cout << "Enter roll number: ";
        cin >> rollNo[i];

        total[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3.0;

        
        if (average[i] >= 80)
            grade[i] = 'A';
        else if (average[i] >= 60)
            grade[i] = 'B';
        else if (average[i] >= 40)
            grade[i] = 'C';
        else
            grade[i] = 'F';

        cout << endl;
    }

    
    cout << "------ Student Report ------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << names[i] << endl;
        cout << "Roll No: " << rollNo[i] << endl;
        cout << "Total Marks: " << total[i] << endl;
        cout << "Average: " << average[i] << endl;
        cout << "Grade: " << grade[i] << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}