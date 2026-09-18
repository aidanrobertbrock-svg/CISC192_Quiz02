//
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include "apex_code.h"

using namespace std;
int main () {
double triangleBase1;
double triangleBase2;
double triangleBase3;
double triangleHeight1;
double triangleHeight2;
double triangleHeight3;
double triangleArea1;
double triangleArea2;
double triangleArea3;
double averageArea
cout << "enter base of 1st triangle with decimal. e.g. 1.0." << endl
cin >> triangleBase1;
cout << "enter the height of the 1st triangle with decimal. e.g. 1.0." << endl;
cin >> triangleHeight1;
cout << "enter base of 2nd triangle with decimal. e.g. 1.0." << endl
cin >> triangleBase2;
cout << "enter the height of the 2nd triangle with decimal. e.g. 1.0." << endl;
cin >> triangleHeight2;
cout << "enter base of 3rd triangle with decimal. e.g. 1.0." << endl
cin >> triangleBase3;
cout << "enter the height of the 3rd triangle with decimal. e.g. 1.0." << endl;
cin >> triangleHeight3;
triangleArea1 = 0.5 * triangleBase1 * triangleHeight1;
triangleArea2 = 0.5 * triangleBase2 * triangleHeight2;
triangleArea3 = 0.5 * triangleBase1 * triangleHeight3;
averageArea = (triangleArea1 + triangleArea2 + triangleArea3) / 3;
cout << "Area of Triangle 1 is :" << setprecison(2) << " " << triangleArea1 << endl;
cout << "Area of Triangle 2 is :" << setprecison(2) << " " << triangleArea2 << endl;
cout << "Area of Triangle 3 is :" << setprecison(2) << " " << triangleArea3 << endl;
cout << "Average Area is :" << setprecison(2) << " " << averageArea << endl;
void quiz(stringstream& cin, stringstream& cout) {
}

