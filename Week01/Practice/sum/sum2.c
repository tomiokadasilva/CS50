#include <stdio.h>
#include <math.h>

int main() {
  int i;
  double sum = 0.0;

  for (i = 1; i <= 9; i++) {
    double term = pow(2.0, 3.0 * i + i * i) / (i + 1);
    sum += term;
  }

  printf("Sum = %f\n", sum);

  return 0;
}
