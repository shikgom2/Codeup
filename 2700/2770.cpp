#include <stdio.h>
#include <stdlib.h>
main(i,n) {
    int cards[30000+1], ones[30000+1], twos[30000+1], min;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &cards[i]);
    if (cards[0] == 2) ones[0] = 1;
    else               ones[0] = 0;
    for (i = 1; i < n; i++)
        if (cards[i] == 2) ones[i] = ones[i-1]+1;
        else               ones[i] = ones[i-1];
    ones[n] = ones[n-1];
    if (cards[n-1] == 1) twos[n-1] = 1;
    else                 twos[n-1] = 0;
    for (i = n-2; i >= 0; i--)
        if (cards[i] == 1) twos[i] = twos[i+1]+1;
        else               twos[i] = twos[i+1];
    twos[n] = 0;
    min = twos[0];
    for (i = 0; i < n; i++)
        if (ones[i] + twos[i+1] < min)
            min = ones[i] + twos[i+1];
    printf ("%d", min);
}
