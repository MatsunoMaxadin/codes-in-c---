/* This code was made to calculate the amount of days in a determinate number of years.*/

#include <iostream>

using namespace std;

int main(){
    
    cout << "Insert the number of years: ";
    int years;
    cin >> years;
    int amountOfDays = years*365;

    cout << "There are " << amountOfDays << " days on this period" << endl;

    return 0;



}