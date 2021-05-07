#include <iostream>
#include <string> //allows use of string variables
#include <iomanip> //allows stream manipulators
using namespace std;
//function prototypes
void month_input (string& one, string& two, string& three); 
void rain_input (float& oneRain, float& twoRain, float& threeRain);
void average_calculation (float& oneRain, float& twoRain, float& threeRain,
float& average);
void display_average (string& one, string& two, string& three, float& average);
//global constant
const int MONTH_NUM = 3;

int main()
{
    //declaring main function variables
    string monthOne, monthTwo, monthThree;
    float monthOneRain, monthTwoRain, monthThreeRain, averageRain;

    cout << "This program calculates the average amount of rainfall ";
    cout << "for three months." << endl << endl;
    //calling functions
    month_input (monthOne, monthTwo, monthThree);
    rain_input(monthOneRain, monthTwoRain, monthThreeRain);
    average_calculation(monthOneRain, monthTwoRain, monthThreeRain, averageRain);
    display_average(monthOne, monthTwo, monthThree, averageRain);

    return 0;
}
//user input function
void month_input (string& one, string& two, string& three)
{
    cout << setw(64) << "Please enter the name of the first month. ";
    cin >> one;
    cout << setw(64) << "Please enter the name of the second month. ";
    cin >> two;
    cout << setw(64) << "Please enter the name of the third month. ";
    cin >> three;
    cout << endl;
}
//user input function
void rain_input (float& oneRain, float& twoRain, float& threeRain)
{
    cout << setw(64) << "Please enter the amount of rainfall in month one, in inches. ";
    cin >> oneRain;
    cout << setw(64) << "Please enter the amount of rainfall in month two, in inches. ";
    cin >> twoRain;
    cout << setw(64) << "Please enter the amount of rainfall in month three, in inches. ";
    cin >> threeRain;
    cout << endl;
}
//processing function
void average_calculation (float& oneRain, float& twoRain, float& threeRain,
float& average)
{
    average = (oneRain + twoRain + threeRain) / MONTH_NUM;
}
//output function
void display_average (string& one, string& two, string& three, float& average)
{
    cout << "The average rainfall for " << one << ", " << two << ", and ";
    cout << three << " is " << setprecision(2) << fixed << average;
    cout << " inches." << endl << endl;
}