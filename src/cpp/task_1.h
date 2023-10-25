/*
 * Author:Muhammad Xayrullayev
 * Date:25.10.2023
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
using namespace std;

int task1_function()() {
    int year;
    cout << "Hello Detective! Please tell me the year that you want to check: " << endl;
    cin >> year ;

    if ( year <= 0) {
        cout << "Hahaha...I see what you are doing! Please write a positive number :)" << endl;
        return 1; 
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "This year is a leap year!" << endl;
    } else {
        cout << "This year is not a leap year!" << endl;
    }

    return 0;
}
