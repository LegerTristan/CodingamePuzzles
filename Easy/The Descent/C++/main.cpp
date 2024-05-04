#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    int _index = 0;
    // game loop
    while (1) {
        int _max = 0;

        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h;
            cin.ignore();

            if (_max < mountain_h)
            {
                _max = mountain_h;
                _index = i;
            }
        }

        cout << _index << endl; // The index of the mountain to fire on.
    }
}