#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    int nearestTemp = 0;
    bool _first = true;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        fprintf(stderr, "%d | %d\n", t, nearestTemp);
        if (abs(t) < abs(nearestTemp) || _first)
            nearestTemp = t;
        else if (abs(t) == abs(nearestTemp))
            nearestTemp = nearestTemp < t ? t : nearestTemp;

        _first = false;
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", nearestTemp);

    return 0;
}