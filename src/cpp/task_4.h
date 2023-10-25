/*
 * Author:Muhammad Xayrullayev
 * Date:25.10.2023
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <string>

using namespace std ;

int task4_function(){
    string sentence, word;
    

    cout << "Please enter a senctence! " ;
    getline(cin, sentence) ;
    cout << "Now, which word do you want me to search for? : "<< endl ;
    cin >> word ;

    size_t found = sentence.find(word) ;
    
    if (found != string::npos) {
        cout << "YAY! Match found at the index : " << found << endl ;
    } else {
        cout << "No match." << endl ;
    }

    return 0 ;
}

