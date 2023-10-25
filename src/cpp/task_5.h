/*
 * Authors:Muhammad Xayrullayev and Google
 * Date:25.10.2023
 * Name:Muhammad Xayrullayev
 */

/* I am sorry but this code is way beyond my level , I berely understood the requirments , let alone the coding part...So I used Google and somehow got a code that works, but not that it's mainly from Google!*/

#include <iostream>
using namespace std;

struct Coordinate {
    int x;
    int y;
};

bool isCharacterAlive(const Coordinate& character, const Coordinate& enemy, int distanceThreshold) {
    int dx = character.x - enemy.x;
    int dy = character.y - enemy.y;
    int squaredDistance = dx * dx + dy * dy;
    return squaredDistance > distanceThreshold * distanceThreshold;
}

int task5_function()() {
    int numEnemies;
    cout << "Enter the number of enemies: ";
    cin >> numEnemies;

    Coordinate character;
    cout << "Enter the coordinates of the character (x y): ";
    cin >> character.x >> character.y;

    int distanceThreshold;
    cout << "Enter the distance threshold for character survival: ";
    cin >> distanceThreshold;

    bool characterAlive = true;

    for (int i = 0; i < numEnemies; ++i) {
        Coordinate enemy;
        cout << "Enter the coordinates of enemy " << i + 1 << " (x y): ";
        cin >> enemy.x >> enemy.y;

        if (!isCharacterAlive(character, enemy, distanceThreshold)) {
            characterAlive = false;
            break;
        }
    }

    if (characterAlive) {
        cout << "The character is alive." << endl;
    } else {
        cout << "The character has died." << endl;
    }

    return 0;
}
