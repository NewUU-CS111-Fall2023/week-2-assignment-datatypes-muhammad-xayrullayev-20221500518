/*
 * Author:Muhammad Xayrullayev
 * Date:25.10.2023
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void corrector (int difference ) {
    if (difference > 30 ) {
        cout << "The number is too high" << endl ;
    } else if (difference < -30) {
        cout << "The number is too low" << endl ;
    } else if (difference > 20) {
        cout << "The number is high" << endl ;
    } else if (difference < -20) {
        cout << "The number is low" << endl ;
    } else if (difference < 10) {
        cout << "The number is high, but you are very close :)" << endl ;
    } else if (difference > -10) {
        cout <<"The number is low, but you are vey close :)" << endl ;
    }
}    

int task2_function(){
    int randomNumber , userNumber, difference ;
    srand(time(0)) ; 

    randomNumber = rand() % 100 + 1 ;
    cout << "The game starts now! Try to guess my hidden number :)" << endl ;
    cin >> userNumber ;

    difference = userNumber - randomNumber ;
    if (difference == 0) {
        cout << "Congratulations! You won!!!" << endl ;
    } else {
        corrector(difference) ;
    }
    return 0 ;
}
