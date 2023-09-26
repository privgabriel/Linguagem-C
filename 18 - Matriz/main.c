#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[3][3];

    v[0][0] = 1;
    v[0][1] = 2;
    v[0][2] = 3;

    v[1][0] = 4;
    v[1][1] = 5;
    v[1][2] = 6;

    v[2][0] = 7;
    v[2][1] = 8;
    v[2][2] = 9;

    int index;
    int indexJ;

    for (index = 0; index < 3; index++) {
        for (indexJ = 0; indexJ < 3; indexJ++) {
            printf("%d ", v[index][indexJ]);
        }
        printf("\n");
    }

    return 0;
}
