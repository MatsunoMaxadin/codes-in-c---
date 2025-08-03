/* This code was made to convert hours or minutes in minutes or seconds*/

#include <iostream>

using namespace std;

int main(){

    cout << "Do you want to convert Hours or Minutes?" << endl;
    cout << "minutes to seconds: 1" << endl;
    cout << "hours to minutes: 2" << endl;

    int chooseOperation;
    int number;


    cin >> chooseOperation;

    if (chooseOperation == 1) 
    cout << "insert the amount of minutes: ";
    else 
    cout << "insert the amount of hours: ";

    cin >> number;

    int result = number*60;

    if (chooseOperation == 1)
    cout << "there Are " << result << " seconds in " << number << " minutes" << endl;
    else 
    cout << "there Are " << result << " minutes in " << number << " minutes" << endl;

    return 0;


}