// 4.12 (Calculating the Sum of Even Integers)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, temp, counter, sum = 0;
  float avg;

  printf("Enter two even integer: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    temp = a;
    a = b;
    b = a;
  }

  for (int i = a; i <= b; i += 2) {
    counter++;
    sum += i;
    avg = ((float)sum) / counter;
  }
  printf("Sum of Even Integers is %f", avg);
  return 0;
}