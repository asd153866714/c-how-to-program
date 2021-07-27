// 4.10 (Average a Sequence of Integers)

#include <stdio.h>

int main() {
  int counter;
  float n = 0, sum = 0, avg;

  do {
    scanf("%f", &n);
    if (n != 9999) {
      sum += n;
      counter++;
    }
  } while (n != 9999);

  avg = sum / counter;
  printf("Average = %f\n", avg);

  return 0;
}