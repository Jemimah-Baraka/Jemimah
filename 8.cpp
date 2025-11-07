#include <iostream>
using namespace std;

// Function to read weekly milk production for each cow
void readProduction(float production[5][7]) {
    for (int cow = 0; cow < 5; cow++) {
        cout << "Enter the weekly milk production for cow " << cow + 1 << " (7 days): \n";
        for (int day = 0; day < 7; day++) {
            cout << "Day " << day + 1 << ": ";
            cin >> production[cow][day];
        }
    }
}

// Function to compute the average daily production per cow
void computeAverage(float production[5][7]) {
    for (int cow = 0; cow < 5; cow++) {
        float totalProduction = 0;
        for (int day = 0; day < 7; day++) {
            totalProduction += production[cow][day];
        }
        float average = totalProduction / 7;
        cout << "Average daily production for cow " << cow + 1 << ": " << average << " liters\n";
    }
}

int main() {
    // Declare an array to store the milk production for 5 cows over 7 days
    float milkProduction[5][7];

    // Read the weekly production data
    readProduction(milkProduction);

    // Compute and display the average daily production per cow
    computeAverage(milkProduction);

    return 0;
}