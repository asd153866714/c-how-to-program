// 4.13 (Calculating the Product of Odd Integers)

#include <stdio.h>

int main() {
  int a, b, temp, counter, product = 1;

  printf("Enter two odd integer: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    temp = a;
    a = b;
    b = a;
  }

  for (int i = a; i <= b; i += 2) {
    product *= i;
  }
  printf("Product of Odd Integers is %d", product);
  return 0;
}