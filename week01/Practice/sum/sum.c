#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double S = 0.0;

    for (i = 1; i <= 9; ++i) {
        S += pow(2, (3 * i + pow(i, 2))) / (i + 1.0);
    }

    printf("The value of S is: %lf\n", S);

    return 0;
}
